#include <iostream>
#include <string>
#include "String.h"
#include <fstream>


using namespace std;


int main()
{
	fstream file;
	file.open("StringData.txt", ios::out);
	if (file.is_open()) {
		cout << "File is Open!" << "\n\n";
		file << "Data Saved" << "\n\n";

	}
	struct tm newtime;
	time_t now = time(0);
	localtime_s(&newtime, &now);
	int sec = newtime.tm_sec;
	int minute = newtime.tm_min;
	int hour = newtime.tm_hour;
	int day = newtime.tm_mday;
	int month = 1 + newtime.tm_mon;
	int year = newtime.tm_year;
	file << "-----------------------------------"  << endl;
	file << "The Time is " << hour << ":" << minute << " and " << sec << " Seconds..." << endl;
	file << "The Date is " << day << "/" << month << "/" << year + 1900 << endl;
	file << "-----------------------------------" << endl;


	// Picking What Num To Look at In the Data
	int index = 0;
	cout << "give a num For the Letter In the Word ";
	cin >> index;
	cout << " " << endl;

	Stringutil st("Hello ");
	Stringutil st2("World");
	cout << " " << endl;
	cout << "The Number You Pick Go With the Letter: " << st.CharacterAt(index) << endl;
	cout << "Your Word is :" << st.Length() << " Letters Long" << endl;
	cout << "You Have :" << st.EqualTo(st2) << " Matching Words" << endl;

	st.Append(st2);
	cout << st.find("hello world") << endl;
	st.Replace("Hello", "TOD");
	cout << " " << endl;

	cout << "Added World To the Frount Of the Word" << endl;
	st.Prpend(st2);
	st.Writetoconsole();
	
	cout << " " << endl;
	cout << "Upper Cased All the Letters" << endl;
	st.Thetoupper();
	st.Writetoconsole();

	cout << " " << endl;
	cout << "Lower Cased All the Letters" << endl;
	st.Thetolower();
	st.Writetoconsole();

	
	cout << (st == st2) << endl;
	cout << (st < st2) << endl;
	cout << st[3] << endl;
	st = st2;
	cout << st.CStr() << endl;

	cout << "Type Somthing into Console To Change The String " << endl;
	st.ReadFromConsole();
	st.Writetoconsole();

	file.close();
} 
