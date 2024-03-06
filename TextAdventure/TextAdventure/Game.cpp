#include "Game.h"
#include <iostream>

#include "StringSystem.h"
using namespace std;

bool StartMapgen = true;
Game::Game()
{

}

Game::~Game()
{

}

void Game::Run() {

	while (isPlaying) {

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
			map.ReloadMap(15, 15);
		}

		cin >> MapState;
	}
	//String str;
}
