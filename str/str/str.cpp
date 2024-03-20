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
	int index = 1;
	
	file << "give a num For the Letter In the Word ";

	file << index;
	file << " " << endl;
	

	float SeccsfulRate = 0;

	Stringutil st("Hello ");
	Stringutil st2("World");

	if (st.Length() == 6){

		file << "Length() is True" << endl;
		SeccsfulRate++;
	}
	else file << "Length() is False" << endl;
	file << "Letters Long:" << st.Length() << endl;

	if (st.CharacterAt(0) -1 == 'H') {
		file << "CharacterAt() is false" << endl;
	}
	else file << "CharacterAt() is True" << endl;
	SeccsfulRate++;
	
	if (st.CharacterAt(index) == 'e') {
		file << "Number At Letter() Is True" << endl;
		SeccsfulRate++;
	}
	else file << "Number At Letter() Is False" << endl;

	if (st.EqualTo(st2)) {
		file << "EqualTo() False" << endl;
	}
	else {
		file << "EqualTo() True" << endl;
		SeccsfulRate++;
	}


	st.Append(st2);

	if (st.EqualTo("Hello World")) {
		file << "Append() True" << endl;
		SeccsfulRate++;
	}
	else file << "Append() False" << endl;
	
	if (st.find("Hello") == 0) {
		file << "Find() True" << endl;
		SeccsfulRate++;
	}
	else file << "Find() False" << endl;


	st.Replace("Hello", "TOD");
	
	if (st.EqualTo("TOD World")) {
		file << "Replace() True" << endl;
		SeccsfulRate++;
	}
	else file << "Replace() False" << endl;
	
	st.Prpend(st2);

	if (st.EqualTo("WorldTOD World")) {
		file << "Prpend() True" << endl;
		SeccsfulRate++;
	}
	else file << "Prpend() False" << endl;
	

	
	st.Thetoupper();

	if (st.EqualTo("WORLDTOD WORLD")) {
		file << "ToUpper() True" << endl;
		SeccsfulRate++;
	}
	else file << "ToUpper() False" << endl;


	st.Thetolower();

	if (st.EqualTo("worldtod world")) {
		file << "ToLower() True" << endl;
		SeccsfulRate++;
	}
	else file << "ToLower() False" << endl;







	if (st == st2) {
		file << "Operator ==() False" << endl;
	}
	else {
		file << "Operator ==() True" << endl;
		SeccsfulRate++;
	}

	if (st < st2) {
		file << "Operator <() False" << endl;
		
	}
	else {
		file << "Operator <() True" << endl;
		SeccsfulRate++;
	}

	if (st[3] == 'l') {
		file << "Operator []() True" << endl;
		SeccsfulRate++;
	}
	else file << "Operator []() False" << endl;

	st = st2;

	if (st.EqualTo(st2)) {
		file << "Operator =() True" << endl;
		SeccsfulRate++;
	}
	else file << "Operator =() False" << endl;
	






	
	
	system("cls");
	cout << "\nType Somthing into Console To Change The String " << endl;
	file << "\nType Somthing into Console To Change The String " << endl;
	
	st.ReadFromConsole();
	st.Writetoconsole();
	file << st.CStr() << endl;
	file << "Successful rate is " << SeccsfulRate << "/14" << endl;
	file << "\n-----------------------------------" << endl;
	file << "file Closed !!" << endl;
	file << "-----------------------------------" << endl;

	cout << "-----------------------------------" << endl;
	cout << "All the Data Have been Save To The Text File" << endl;
	cout << "-----------------------------------" << endl;
	file.close();
} 
