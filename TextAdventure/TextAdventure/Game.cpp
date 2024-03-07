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
			map.xpos = 7;
			map.ypos = 7;
		}


		if (MapState == 2) {
			map.MapGenMathSetup(15, 15);
		}
		if (MapState == 1) {
			cout << "Same Map Loaded" << endl;
			map.ReloadMap(15, 15);
			ThingsIDS();
		}
		

		cin >> Movementkey;

		cout << PlayerXpos << endl;
		if (Movementkey == 'w') {
			if (map.RoomSize[map.xpos - 1][map.ypos] == '\xDB') {

			}
			else{
				map.xpos--;
			}
		}
		else if (Movementkey == 's') {
			if (map.RoomSize[map.xpos + 1][map.ypos] == '\xDB') {

			}
			else {
				map.xpos++;
			}
		}
		else if (Movementkey == 'd') {
			if (map.RoomSize[map.xpos][map.ypos + 1] == '\xDB') {

			}
			else {
				map.ypos++;
			}
		}
		else if (Movementkey == 'a') {
			if (map.RoomSize[map.xpos][map.ypos - 1] == '\xDB') {

			}
			else {
				map.ypos--;
			}
		}
		else
		{

		}

		
		map.ClsRest();
		MapState = 1;
		
		//cin >> MapState;
	
	}
	//String str;
}

void Game::ThingsIDS()
{

	ItemIdNums = map.ThingsID;
	cout << endl << ItemIdNums << endl;
	if (ItemIdNums == 1) {
		cout << "Enemy" << endl;
	}

	if (ItemIdNums == 2) {
		cout << "Gold" << endl;
	}

	if (ItemIdNums == 3) {
		cout << "Mana" << endl;
	}

	if (ItemIdNums == 4) {
		cout << "Tree" << endl;
	}

	if (ItemIdNums == 5) {
		cout << "Orb" << endl;
	}
	
}
