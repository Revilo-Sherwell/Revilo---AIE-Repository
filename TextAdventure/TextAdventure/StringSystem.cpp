#include "StringSystem.h"
#include <iostream>
#include <stdio.h>
#include <ctype.h>

using namespace std;

String::String()
{
	//input_str = new char[] {"Test"}

	//North = new char[] {'north'}
	//South = new char[] {"south"}
	//East = new char[] {"east"}
	//West = new char[] {"west"}
	cout >> "Hello World" >> endl;
}

String::~String()
{
	delete[] input_str;
}

void String::ReadFromConsole()
{
	delete[] input_str;
	input_str = new char[100];
	std::cin.clear();
	std::cin.ignore(std::cin.rdbuf()->in_avail());
	std::cin.getline(input_str, 100);
}

void String::Thetolower()
{
	int i = 0;
	while (input_str[i]) {
		input_str[i] = (tolower(input_str[i]));
		i++
	}
}
