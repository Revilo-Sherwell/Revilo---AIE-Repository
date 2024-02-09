
#include <iostream>
#include "String.h"
using namespace std;




Stringutil::Stringutil()
{

}

Stringutil::Stringutil(const char* c)
{
	m_str = new char[(strlen(c)) + 1]; // size of string 
	strcpy_s(m_str, (strlen(c)) + 1, c);

	cout << c;
}

Stringutil::Stringutil(Stringutil& st)
{
	m_str = new char[(strlen(st.m_str)) + 1];
	strcpy_s(m_str, (strlen(st.m_str)) + 1, st.m_str);	
}
 




Stringutil::~Stringutil()
{
	delete[] m_str;

}


int Stringutil::Length()
{

	return strlen(m_str);

}

char Stringutil::CharacterAt(size_t _index) {
	if (_index < 0 || _index > this->Length()) return '\0';
	else return m_str[_index];
}

bool Stringutil::EqualTo(Stringutil st)
{
	if (strcmp(st.m_str, m_str) == 0) {
		return true;
	}
	else
	{
		return false;
	}	
}

void Stringutil::Append(const Stringutil& other)
{
	int Strfill = Length() + strlen(other. m_str) + 1;
	char* firstpart = new char[(Strfill)];
	strcpy_s(firstpart, Strfill, m_str);
	strcat_s(firstpart, Strfill, other.m_str);

	delete[] m_str;
	m_str = firstpart;

}

void Stringutil::Prpend(const Stringutil& other)
{
	int Strfill = Length() + strlen(other.m_str) + 1;
	char* firstpart = new char[(Strfill)];
	strcpy_s(firstpart, Strfill, other.m_str);
	strcat_s(firstpart, Strfill, m_str);

	

	delete[] m_str;
	m_str = firstpart;

}

char* Stringutil::CStr()
{
	return m_str;
	
}


