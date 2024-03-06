#pragma once
#include "MapGen.h"
class Game
{
public:
	Game();
	~Game();
	
public:
	void Run();

public:

	int PlayerXpos = 7;
	int PlayerYpos = 7;


	int PlayerHealth = 100;
	int ManaCount = 50;
	int Gold = 0;

	int MapState = 0;
	char Movementkey = 'k';

private:
	MapGen map;
	bool isPlaying = true;
};

