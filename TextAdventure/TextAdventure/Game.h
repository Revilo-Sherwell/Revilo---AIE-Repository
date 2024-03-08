#pragma once
#include "MapGen.h"
#include "StringSystem.h"
#include "Player.h"
class Game
{
public:
	Game();
	~Game();
	
public:
	void Run();
	void ThingsIDS();
	void Wallcheacker();
	void DoorWays();
	void input();

	static Game* GetInstance() { return gameInstance; }

public:

	Player* player;

	int PlayerXpos = 7;
	int PlayerYpos = 7;


	int PlayerHealth = 100;
	int ManaCount = 0;
	int Gold = 0;

	int ItemIdNums = 0;
	int MapState = 0;
	int Movementkey = 0;
	


private:
	MapGen map;
	Stringutil str;
	bool isPlaying = true;

	static Game* gameInstance;
};

