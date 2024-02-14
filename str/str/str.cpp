#include <iostream>
#include <string>
#include "String.h"


using namespace std;


int main()
{
	// Picking What Num To Look at In the Data
	int index = 0;
	cout << "give a num";
	cin >> index;

	// Setting all the data
	Stringutil st("Hello ");
	Stringutil st2("World");
	st.Append(st2);
	st.Prpend(st2);

	// Print All The Data to The Screen
	cout << st.Length() << std::endl;
	cout << st.EqualTo(st2) << endl;
	cout << st.CStr() << std::endl;
	cout << "Your Letter is " << st.CharacterAt(index) << std::endl;

	st.Thetoupper();
	st.Writetoconsole();

	st.Thetolower();
	st.Writetoconsole();

	st.ReadFromConsole();
	st.Writetoconsole();


} 