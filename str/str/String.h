#pragma once

class Stringutil
{
public:
	Stringutil();
	Stringutil(const char* c);// array that set the size of the text
	Stringutil(Stringutil& st); //Copy Constructor
	~Stringutil();

public:
	int Length();
	char CharacterAt(size_t _index);
	bool EqualTo(Stringutil st);
	void Append(const Stringutil& other);
	void Prpend(const Stringutil& other);
	char* CStr();

private:
	char* m_str;
};