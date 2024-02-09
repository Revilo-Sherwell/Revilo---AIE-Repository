#include <iostream>
#include <string>
#include "String.h"

using namespace std;


int main()
{

	int index = 0;
	cout << "give a num";
	cin >> index;

	Stringutil st("Hello ");
	Stringutil st2("World");
	st.Append(st2);
	st.Prpend(st2);

	cout << st.Length() << std::endl;
	cout << st.EqualTo(st2) << endl;

	cout << st.CStr();
	cout << "Your Letter is " << st.CharacterAt(index) << std::endl;
} 