
#include <iostream>
#include "StringSystem.h"
#include <stdio.h>
#include <ctype.h>
using namespace std;


Stringutil::Stringutil() {
	m_str = new char{ '\0'};
}

Stringutil::Stringutil(const char* c) {
	m_str = new char[(strlen(c)) + 1]; // size of string 
	strcpy_s(m_str, (strlen(c)) + 1, c);

	cout << c;
}
Stringutil::Stringutil(Stringutil& st) {
	m_str = new char[(strlen(st.m_str)) + 1];
	strcpy_s(m_str, (strlen(st.m_str)) + 1, st.m_str);
}

Stringutil::~Stringutil() {
	delete[] m_str;
}

int Stringutil::Length() {
	return strlen(m_str);
}

// All the Find Stuff Finds
int Stringutil::StartIndexfindString(size_t _startindex, const char* c)
{
	if (strlen(c) < Length()) {
		for (int i = _startindex; i < Length() - strlen(c); i++) {
			if (CompaereAt(i, c)) {
				return i;
			}
		}
	}
	return -1;
}

int Stringutil::find(const char* c)
{
	return StartIndexfindString(0, c);
}

bool Stringutil::CompaereAt(int index, const char* c)
{
	for (int i = 0; i < strlen(c); i++) {
		if (m_str[index] != c[i]) {
			return false;
		}
		index++;
	}
	return true;
}
char* Stringutil::Replace(const char* c, const char* newCharacters)
{
	while (find(c) != -1) {

		int NewLength = Length() - strlen(c) + strlen(newCharacters) + 1;
		char* TempArray = new char[NewLength];
		TempArray[NewLength - 1] = '\0';

		int location = find(c);

		for (int i = 0; i < location; i++) {
			TempArray[i] = m_str[i];
		}

		for (int i = 0; i < strlen(newCharacters); i++)
		{
			TempArray[location + i] = newCharacters[i];
		}

		for (int i = location + strlen(newCharacters); i < NewLength; i++) {
			if (TempArray[i] != '\0') {
				TempArray[i] = m_str[(i + strlen(c) - strlen(newCharacters))];
			}
		}

		delete[] m_str;

		m_str = TempArray;
	}
	return m_str;
}


// To See the size of the String
char Stringutil::CharacterAt(size_t _index) {
	if (_index < 0 || _index >this->Length()) return '\0';
	else return m_str[_index];
}

// See if there are 2 String tell if it is Equal
bool Stringutil::EqualTo(Stringutil st) {
	if (strcmp(st.m_str, m_str) == 0) {
		return true;
	}
	else {
		return false;
	}
}


// To add A string Before Of After The First String
void Stringutil::Append(const Stringutil& other) {
	int Strfill = Length() + strlen(other.m_str) + 1;
	char* firstpart = new char[(Strfill)];
	strcpy_s(firstpart, Strfill, m_str);
	strcat_s(firstpart, Strfill, other.m_str);

	delete[] m_str;
	m_str = firstpart;

}

void Stringutil::Prpend(const Stringutil& other) {
	int Strfill = Length() + strlen(other.m_str) + 1;
	char* firstpart = new char[(Strfill)];
	strcpy_s(firstpart, Strfill, other.m_str);
	strcat_s(firstpart, Strfill, m_str);

	delete[] m_str;
	m_str = firstpart;
}



// To Print it all in Upper Case or Lower Case
void Stringutil::Thetolower() {
	int i = 0;
	while (m_str[i]) {
		m_str[i] = (tolower(m_str[i]));
		i++;
	}
}

void Stringutil::Thetoupper() {
	int i = 0;
	while (m_str[i]) {
		m_str[i] = (toupper(m_str[i]));
		i++;
	}
}



// Tell To Print All the Data that is called to this Fuitshion
void Stringutil::Writetoconsole() {
	std::cout << m_str << std::endl;
}

void Stringutil::ReadFromConsole() {
	delete[] m_str;
	m_str = new char[100];
	std::cin.clear();
	std::cin.ignore(std::cin.rdbuf()->in_avail());
	std::cin.getline(m_str, 100);

}




//---------------------------------------
/////////////////////////////////////////
//---------------------------------------
bool Stringutil::operator==(const Stringutil& other)
{
	if (strcmp(other.m_str, m_str) == 0) {
		return true;
	}
	else {
		return false;
	}
}

bool Stringutil::operator<(const Stringutil& other)
{
	if (strcmp(other.m_str, m_str) == 1) {
		return true;
	}
	return false;
}

bool Stringutil::operator<=(const Stringutil& other)
{
	if (strcmp(other.m_str, m_str) >= 0) {
		return true;
	}
	return false;
}

char Stringutil::operator[](const size_t& other)
{
	return CharacterAt(other);
}

void Stringutil::operator=(const Stringutil& other)
{
	Replace(m_str, other.m_str);
}

//---------------------------------------
/////////////////////////////////////////
//---------------------------------------



char* Stringutil::CStr() {
	return m_str;
}