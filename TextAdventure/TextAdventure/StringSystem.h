#pragma once

class String
{
public:
	String();
	~String();

public:
	void ReadFromConsole();
	void Thetolower();
	void textmove();

	char* North;
	char* South;
	char* East;
	char* West;

private:
	char* input_str;
	
};
