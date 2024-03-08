#include "Game.h"
#include <iostream>
#include "itemclass.h"
#include "StringSystem.h"
using namespace std;
Game* Game::gameInstance;

bool StartMapgen = true;
Game::Game()
{
	gameInstance = this;
	
}

Game::~Game()
{
	delete player;
}

void Game::Run() {

	player = new Player();

	while (isPlaying) {

		//PlayerXpos = map.xpos;
		//PlayerYpos = map.ypos;

		
		if (StartMapgen == true) {
			map.xpos = 7;
			map.ypos = 7;
			map.MapGenMathSetup(15, 15);
			StartMapgen = false;
		}


		if (MapState == 2) {
			map.MapGenMathSetup(15, 15);
		}
		if (MapState == 1) {
			cout << "Same Map Loaded" << endl;
			map.ReloadMap(15, 15);
			ThingsIDS();
		}
		cout << "Gold: " << Gold << " Mana: " << ManaCount << endl;

		map.ListStuff(15, 15);

		//cin >> Movementkey;
		input();
		DoorWays();
		
		
		map.ClsRest();
		
		
		
		//cin >> MapState;
	
	}
	//String str;
}

void Game::ThingsIDS()
{
	
}

void Game::Wallcheacker()
{
	cout << PlayerXpos << endl;
	if (Movementkey == 1) {
		if (map.RoomSize[map.xpos - 1][map.ypos] == '\xDB') {
		}
		else {
			map.xpos--;
		}
	}
	else if (Movementkey == 2) {
		if (map.RoomSize[map.xpos + 1][map.ypos] == '\xDB') {
		}
		else {
			map.xpos++;
		}
	}
	else if (Movementkey == 3) {
		if (map.RoomSize[map.xpos][map.ypos + 1] == '\xDB') {
		}
		else {
			map.ypos++;
		}
	}
	else if (Movementkey == 4) {
		if (map.RoomSize[map.xpos][map.ypos - 1] == '\xDB') {
		}
		else {
			map.ypos--;
		}
	}
	else
	{

	}


}

void Game::DoorWays()
{
	if (map.xpos == 0) {
		map.xpos = 13;
		map.ypos = 7;
		cout << "Up" << endl;
		MapState = 2;
	}

	else if (map.xpos == 14) {
		map.xpos = 1;
		map.ypos = 7;
		cout << "Down" << endl;
		MapState = 2;
		
	}

	else if (map.ypos == 0) {
		map.xpos = 7;
		map.ypos = 13;
		cout << "Left" << endl;
		MapState = 2;
		
	}

	else if (map.ypos == 14) {
		map.xpos = 7;
		map.ypos = 1;
		cout << "Right" << endl;
		MapState = 2;
		
	}
	else
	{
		MapState = 1;
	}
}

void Game::input()
{
	bool InputLooping = true;
	while (InputLooping == true)
	{

		str.ReadFromConsole();
		str.Thetolower();

		switch (str.CharacterAt(0))
		{

		case'm':
			if (str.find("move") != -1) {
				if (str.find("up") != -1) {
					Movementkey = 1;
					InputLooping = false;
					Wallcheacker();
					break;
				}

				else if (str.find("left") != -1) {
					Movementkey = 4;
					InputLooping = false;
					Wallcheacker();
					break;
				}

				else if (str.find("right") != -1) {
					Movementkey = 3;
					InputLooping = false;
					Wallcheacker();
					break;
				}

				else if (str.find("down") != -1) {
					Movementkey = 2;
					InputLooping = false;
					Wallcheacker();
					break;
				}
				else
				{
					cout << "Could Not Figure out Where You Would Like To Move To" << endl;
				}

			}


		case 'u':
			if (str.find("use") != -1) {
				for (itemclass* item : map.items) {
					if (item->x == map.ypos && item->y == map.xpos){
						item->Use();
						map.RoomSize[map.xpos][map.ypos] = ' ';
						map.RemoveVectorData(item);
						break;
					}
				}
			}

		case 's':
			if (str.find("spell") != -1) {

				str.Replace("spell ", "");
				if (player->FindSpell(str)) {
					cout << "You have the spell " << str.CStr() << endl;
					
				}
				else {
					cout << "You do not have the spell " << str.CStr() << endl;

				}
			}
		case 'l':
			if (str.find("list") != -1) {
				cout << "\n 1.Teleport:  Witch Teleports You To the Spawn Room " << endl;
				cout << " 2.Heal:      Which Gives you 25 Health Back" << endl;
				cout << " 3.Freeze:    Which Make It That The Enemy Can Not Attack You For a Round" << endl;
			}
		}
	}
}
