#include "Game.h"
#include <iostream>
#include "MapGen.h"
#include "StringSystem.h"
using namespace std;

bool StartMapgen = true;
Game::Game()
{
	MapGen map;

	PlayerXpos = map.xpos;
	PlayerYpos = map.ypos;
	
	if (StartMapgen == true) {
		map.MapGenMathSetup(15, 15);
		StartMapgen = false;
	}

	if (MapState == 2) {
		map.MapGenMathSetup(15, 15);
	}
	if (MapState == 1) {
		cout << "Same Map Loaded" << endl;
	}

	cin >> MapState;

	//String str;
}

Game::~Game()
{

}
