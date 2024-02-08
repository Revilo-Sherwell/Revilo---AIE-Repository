
#include <iostream>
#include "String.h"
using namespace std;




Stringutil::Stringutil()
{
}

Stringutil::Stringutil(const char* c)
{
	m_str = new char[(strlen(c)) + 1]; // soze of string 
	strcpy_s(m_str, (strlen(c)) + 1, c);

	cout << c;
}

Stringutil::Stringutil(Stringutil& st)
{


}

Stringutil::~Stringutil()
{


}


int Stringutil::Length()
{

	return strlen(m_str);

}

char Stringutil::CharacterAt(size_t _index) {
	if (_index < 0 || _index > this->Length()) return '\0';
	else return m_str[_index];
}



