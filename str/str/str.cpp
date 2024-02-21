#include <iostream>
#include <string>
#include "String.h"


using namespace std;


int main()
{
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


} 
