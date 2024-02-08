#pragma once

class Stringutil
{
public:
	Stringutil();
	Stringutil(const char* c);
	Stringutil(Stringutil& st);
	~Stringutil();

public:
	int Length();
	char CharacterAt(size_t _index);

private:
	char* m_str;
};