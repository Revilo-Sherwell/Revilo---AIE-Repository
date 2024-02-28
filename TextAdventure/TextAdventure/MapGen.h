#pragma once
class MapGen
{
public:
	MapGen();
	~MapGen();

public:
	void MapSetup();
	void MapGenMathSetup(int m_len, int m_wid);
	void Worldmap(int m_len, int w_wid);
	void LevelMaps();
	
	
	
	void ClsRest();

	char RoomSize[15][15];
	char worldMap[25][25];

	int xpos = 7;
	int ypos = 7;
	char PlayerSymbol = 'U';

	int min_x;//top left minimum, bottom right maximum
	int min_y;
	int max_x;
	int max_y;
	char fillCharacter = '*';
	int RoomStyle;

	//int Pxpos = 7;
	//int Pxpos = 7;
	//char* PreSymbol;
private:
	int m_gridmaplength;
	char* m_griddata;
};

