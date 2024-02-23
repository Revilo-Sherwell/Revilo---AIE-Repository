#pragma once
class MapGen
{
public:
	MapGen();
	~MapGen();

public:
	void MapSetup();
	void MapGenMathSetup(int m_len, int m_wid);
	//void ResetScreen();


	char RoomSize[15][15];

	int xpos = 0;
	int ypos = 0;
private:
	int m_gridmaplength;
	char* m_griddata;
};

