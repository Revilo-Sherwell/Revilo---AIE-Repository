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
	void MapThingSpawns(int m_len, int m_wid);
	void ListStuff(int m_len, int m_wid);
	void ReloadMap(int m_len, int m_wid);
	
	
	
	void ClsRest();

	
	char RoomSize[15][15];
	char worldMap[5][5];

	int xpos;
	int ypos;
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

