#include <iostream>
#include <string>
#include "String.h"

using namespace std;


int main()
{

	int index = 0;
	cout << "give a num";
	cin >> index;
	Stringutil st("Hello, World ");
	cout << st.Length() << std::endl;

	cout << "Your Letter is " << st.CharacterAt(index) << std::endl;
}