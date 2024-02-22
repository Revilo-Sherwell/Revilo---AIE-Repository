#include <iostream>
#include <string>
#include "String.h"
#include <fstream>


using namespace std;


int main()
{
	fstream file;
	file.open("../StringData.txt", ios::out);
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
	cout << "Your Word Is Hello World" << endl;
	file << "give a num For the Letter In the Word ";
	cout << "give a num For the Letter In the Word ";
	cin >> index;
	file << index;
	file << " " << endl;
	

	float SeccsfulRate = 0;

	Stringutil st("Hello ");
	Stringutil st2("World");

	file << "-----------------------------------" << endl;
	file << "All The True And False" << endl;
	if (st.Length() == 7){

		cout << "Length() is True" << endl;
		SeccsfulRate++;
	}
	else file << "Length() is False" << endl;

	if (st.CharacterAt() 1 == 'H') {
		file << "CharacterAt() is True" << endl;
		SeccsfulRate++;
	}
	else file << "CharacterAt() is True" << endl;
	file << "-----------------------------------" << endl;



	file << " " << endl;
	file << "The Number You Pick Go With the Letter: " << st.CharacterAt(index) << endl;
	file << "Your Word is :" << st.Length() << " Letters Long" << endl;
	file << "You Have :" << st.EqualTo(st2) << " Matching Words" << endl;
	file << "-----------------------------------" << endl;

	st.Append(st2);
	file << st.CStr();
	file << st.find("Hello world") << endl;
	file << "-----------------------------------" << endl;

	st.Replace("Hello", "TOD");
	file << st.CStr();
	file << "\n-----------------------------------" << endl;

	file << "Added World To the Frount Of the Word" << endl;
	st.Prpend(st2);
	file << st.CStr();
	file << "\n-----------------------------------" << endl;

	file << "Upper Cased All the Letters" << endl;
	st.Thetoupper();
	file << st.CStr();
	file << "\n-----------------------------------" << endl;
	file << " " << endl;
	file << "Lower Cased All the Letters" << endl;
	st.Thetolower();
	file << st.CStr();
	file << "\n-----------------------------------" << endl;
	file << "All The Operators\n";
	
	file << (st == st2) << endl;
	file << (st < st2) << endl;
	file << st[3] << endl;
	st = st2;
	file << st.CStr() << endl;
	file << "\n-----------------------------------" << endl;

	cout << "\nType Somthing into Console To Change The String " << endl;
	file << "Type Somthing into Console To Change The String " << endl;
	st.ReadFromConsole();
	st.Writetoconsole();
	file << st.CStr() << endl;
	file << "\n\n-----------------------------------" << endl;
	file << "file Closed !!" << endl;
	file << "-----------------------------------" << endl;

	cout << "-----------------------------------" << endl;
	cout << "All the Data Have been Save To The Text File" << endl;
	cout << "-----------------------------------" << endl;
	file.close();
} 
