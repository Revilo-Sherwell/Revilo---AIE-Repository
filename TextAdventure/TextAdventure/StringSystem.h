#pragma once

class Stringutil
{
public:
	Stringutil();
	Stringutil(const char* c);// array that set the size of the text
	Stringutil(const Stringutil& st); //Copy Constructor
	~Stringutil();

public:
	int Length();
	int StartIndexfindString(size_t _startindex, const char* c);
	int StartIndexfindtring(size_t _startindex, const char* c);
	int find(const char* c);

	char CharacterAt(size_t _index);

	bool EqualTo(Stringutil st);
	bool CompaereAt(int index, const char* c);

	char* Replace(const char* c, const char* newCharacters);


	void Append(const Stringutil& other);
	void Prpend(const Stringutil& other);
	void Thetolower();
	void Thetoupper();
	void Writetoconsole();
	void ReadFromConsole();
	//void SetTodefalt();
public:
	bool operator==(const Stringutil& other);
	bool operator<(const  Stringutil& other);
	bool operator<=(const  Stringutil& other);
	char operator[](const size_t& other);
	void operator=(const Stringutil& other);



	char* CStr();

private:
	char* m_str;
};