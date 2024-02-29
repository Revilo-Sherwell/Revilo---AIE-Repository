#include "StringSystem.h"
#include "MapGen.h"
#include <iostream>
#include <stdio.h>
#include <ctype.h>

using namespace std;

String::String()
{
	input_str = new char[10] {"Test"};

	North = new char[10] {"north"};
	South = new char[10] {"south"};
	East = new char[10] {"east"};
	West = new char[10] {"west"};
	ReadFromConsole();
	textmove();
	
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
		i++;
	}
}

void String::textmove()
{
	
	cout << input_str << endl;

}
