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

		cout << PlayerXpos << endl;
		if (Movementkey == 'w') {
			PlayerXpos += 1;
		}
		

		map.PraintPlayerPos(PlayerXpos, PlayerYpos);

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
		
		MapState = 1;
		cin >> Movementkey;
		//cin >> MapState;
	
	}
	//String str;
}
