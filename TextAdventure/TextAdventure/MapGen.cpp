#include "MapGen.h"
#include <iostream>


using namespace std;

bool StartingZone = true;
int RoomSpawnRate = 0;

MapGen::MapGen(){
	MapSetup();
}


MapGen::~MapGen()
{
}

void MapGen::MapSetup()
{


	int Chucknum = 1;
	switch (Chucknum)
	{
	case(1):

		cout << " " << endl;


		//cout << RoomSize;
	break;
	}
}

void MapGen::MapGenMathSetup(int m_len, int m_wid)
{
	int spawnamount = 3;

	RoomStyle = 0;


	for (int i = 0; i < m_len; i++) {
		RoomSize[i][0] = '\xDB';
		RoomSize[i][m_len - 1] = '\xDB';
		RoomSize[0][i] = '\xDB';
		RoomSize[m_len - 1][i] = '\xDB';

	}

	for (int height = 1; height < m_len - 1; height++) {
		for (int width = 1; width < m_wid - 1; width++) {
			RoomSize[height][width] = '1';
		}
	}


	if (StartingZone == true) {
		RoomStyle = 0;
		StartingZone = false;
	}
	else
	{
		srand(time(NULL));
		RoomStyle = rand() % 5 + 1;
	}

	LevelMaps();


	for (int x = min_x; x <= max_x; x++) {
		for (int y = min_y; y <= max_y; y++) {
			RoomSize[x][y] = fillCharacter;
		}
	}

	for (int height = 0; height < m_len; height++) {
		for (int width = 0; width < m_wid; width++) {
		}
		cout << endl;
	}

	
	//Auto added The Spaces Between the Path And the grass
	//This Code Comes From the left to right
	for (int height = 0; height < m_len; height++) {
		for (int width = 0; width < m_wid; width++) {
			if (RoomSize[height][width + 1] == '*') {
				if (RoomSize[height][width] == '*') {
				}
				else
				{
					RoomSize[height][width] = 'x';
				}

			}
		}
		cout << endl;
	}

	//this one come left to right
	for (int height = 0; height < m_len; height++) {
		for (int width = 0; width < m_wid; width++) {
			if (RoomSize[height][width + -1] == '*') {
				if (RoomSize[height][width] == '*') {
				}
				else
				{
					RoomSize[height][width] = 'x';
				}

			}
		}
		cout << endl;
	}

	//this one comes from top to bottem
	for (int height = 0; height < m_len; height++) {
		for (int width = 0; width < m_wid; width++) {
			if (RoomSize[height + 1][width] == '*') {
				if (RoomSize[height][width] == '*') {
				}
				else
				{
					RoomSize[height][width] = 'x';
				}

			}
		}
		cout << endl;
	}
	// this one comes bottem to top
	for (int height = 0; height < m_len; height++) {
		for (int width = 0; width < m_wid; width++) {
			if (RoomSize[height + -1][width] == '*') {
				if (RoomSize[height][width] == '*') {
				}
				else
				{
					RoomSize[height][width] = 'x';
				}

			}

		}
		cout << endl;
	}

	for (int height = 0; height < m_len; height++) {
		for (int width = 0; width < m_wid; width++) {
			if (RoomSize[height][width] == 'x') {
				RoomSize[height][width] = ' ';
			}

			cout << " " << RoomSize[height][width];
		}
		cout << endl;
	}
	cout << endl;
	srand(time(NULL));
	for (int height = 0; height < m_len; height++) {
		for (int width = 0; width < m_wid; width++) {
			if (RoomSize[height][width] == '1') {
				RoomSpawnRate = rand() % 25 + 1;
				if (RoomSpawnRate == 1) {
					RoomSize[height][width] = 'X';//'!';
				}
				else {
					RoomSize[height][width] = ' ';
				}
				
			}
			cout << " " << RoomSize[height][width];

		}
		cout << endl;
	}
	ClsRest();


	MapThingSpawns(m_len, m_wid);
	ListStuff(m_len, m_wid);
	//Worldmap(15, 25);
}

void MapGen::Worldmap(int m_len, int w_wid)
{
	cout << endl;
	for (int hight = 0; hight < m_len; hight++) {
		for (int width = 0; width < w_wid; width++) {
			worldMap[hight][width] = '1';
			cout << ' ' << worldMap[hight][width];
		}
		cout << endl;
	}
}

void MapGen::LevelMaps()
{
	cout << "Running" << endl;
	switch (RoomStyle)
	{
	case(0):
		min_x = 6;
		min_y = 1;
		max_x = 8;
		max_y = 4;

		for (int x = min_x; x <= max_x; x++) {
			for (int y = min_y; y <= max_y; y++) {
				RoomSize[x][y] = fillCharacter;
			}
		}

		min_x = 6;
		min_y = 10;
		max_x = 8;
		max_y = 13;


		for (int x = min_x; x <= max_x; x++) {
			for (int y = min_y; y <= max_y; y++) {
				RoomSize[x][y] = fillCharacter;
			}
		}
		min_x = 1;
		min_y = 6;
		max_x = 4;
		max_y = 8;

		for (int x = min_x; x <= max_x; x++) {
			for (int y = min_y; y <= max_y; y++) {
				RoomSize[x][y] = fillCharacter;
			}
		}


		min_x = 10;
		min_y = 6;
		max_x = 13;
		max_y = 8;

		for (int x = min_x; x <= max_x; x++) {
			for (int y = min_y; y <= max_y; y++) {
				RoomSize[x][y] = fillCharacter;
			}
		}
		min_x = 9;
		min_y = 4;
		max_x = 10;
		max_y = 10;

		for (int x = min_x; x <= max_x; x++) {
			for (int y = min_y; y <= max_y; y++) {
				RoomSize[x][y] = fillCharacter;
			}
		}
		min_x = 4;
		min_y = 4;
		max_x = 5;
		max_y = 10;



		for (int x = min_x; x <= max_x; x++) {
			for (int y = min_y; y <= max_y; y++) {
				RoomSize[x][y] = fillCharacter;
			}
		}
		min_x = 5;
		min_y = 3;
		max_x = 5;
		max_y = 3;


		for (int x = min_x; x <= max_x; x++) {
			for (int y = min_y; y <= max_y; y++) {
				RoomSize[x][y] = fillCharacter;
			}
		}
		min_x = 5;
		min_y = 11;
		max_x = 5;
		max_y = 11;

		for (int x = min_x; x <= max_x; x++) {
			for (int y = min_y; y <= max_y; y++) {
				RoomSize[x][y] = fillCharacter;
			}
		}
		min_x = 9;
		min_y = 3;
		max_x = 9;
		max_y = 3;


		for (int x = min_x; x <= max_x; x++) {
			for (int y = min_y; y <= max_y; y++) {
				RoomSize[x][y] = fillCharacter;
			}
		}
		min_x = 9;
		min_y = 11;
		max_x = 9;
		max_y = 11;

		for (int x = min_x; x <= max_x; x++) {
			for (int y = min_y; y <= max_y; y++) {
				RoomSize[x][y] = fillCharacter;
			}
		}
		min_x = 8;
		min_y = 5;
		max_x = 8;
		max_y = 5;

		for (int x = min_x; x <= max_x; x++) {
			for (int y = min_y; y <= max_y; y++) {
				RoomSize[x][y] = fillCharacter;
			}
		}
		min_x = 6;
		min_y = 5;
		max_x = 6;
		max_y = 5;

		for (int x = min_x; x <= max_x; x++) {
			for (int y = min_y; y <= max_y; y++) {
				RoomSize[x][y] = fillCharacter;
			}
		}
		min_x = 6;
		min_y = 9;
		max_x = 6;
		max_y = 9;

		for (int x = min_x; x <= max_x; x++) {
			for (int y = min_y; y <= max_y; y++) {
				RoomSize[x][y] = fillCharacter;
			}
		}
		min_x = 8;
		min_y = 9;
		max_x = 8;
		max_y = 9;

		for (int x = min_x; x <= max_x; x++) {
			for (int y = min_y; y <= max_y; y++) {
				RoomSize[x][y] = fillCharacter;
			}
		}
		min_x = 7;
		min_y = 7;
		max_x = 7;
		max_y = 7;
		break;

	case(1):
		min_x = 1;
		min_y = 6;
		max_x = 13;
		max_y = 8;
		/*
		_ _ _ _ _ _ _ _ _ _ _ _ _ _ _
		|         * * * * *         |
		|         * * * * *         |
		|         * * * * *         |
		|         * * * * *         |
		|         * * * * *         |
		|         * * * * *         |
		|         * * * * *         |
		|         * * * * *         |
		|         * * * * *         |
		|         * * * * *         |
		|         * * * * *         |
		|         * * * * *         |
		|         * * * * *         |
		| ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~
		*/
		break;
	case(2):
		min_x = 6;
		min_y = 1;
		max_x = 8;
		max_y = 13;

		/*
		_ _ _ _ _ _ _ _ _ _ _ _ _ _ _
		|                           |
		|                           |
		|                           |
		|                           |
		| * * * * * * * * * * * * * |
		| * * * * * * * * * * * * * |
		| * * * * * * * * * * * * * |
		| * * * * * * * * * * * * * |
		| * * * * * * * * * * * * * |
		|                           |
		|                           |
		|                           |
		|                           |
		| ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~
		*/
		break;
	case(3):
		min_x = 6;
		min_y = 1;
		max_x = 8;
		max_y = 7;

		for (int x = min_x; x <= max_x; x++) {
			for (int y = min_y; y <= max_y; y++) {
				RoomSize[x][y] = fillCharacter;
			}
		}
		min_x = 1;
		min_y = 6;
		max_x = 13;
		max_y = 8;
		/*
		_ _ _ _ _ _ _ _ _ _ _ _ _ _ _
		|                           |
		|                           |
		|                           |
		|                           |
		| *******|
		| *******|
		| *******|
		| *******|
		| *******|
		|                           |
		|                           |
		|                           |
		|                           |
		| ~~~~~~~~~~~~~~
		*/
		break;
	case(4):
		min_x = 6;
		min_y = 7;
		max_x = 8;
		max_y = 13;
		//same as the one before but on the other side
		for (int x = min_x; x <= max_x; x++) {
			for (int y = min_y; y <= max_y; y++) {
				RoomSize[x][y] = fillCharacter;
			}
		}
		min_x = 1;
		min_y = 6;
		max_x = 13;
		max_y = 8;
		break;
	case(5):
		min_x = 1;
		min_y = 6;
		max_x = 13;
		max_y = 8;

		for (int x = min_x; x <= max_x; x++) {
			for (int y = min_y; y <= max_y; y++) {
				RoomSize[x][y] = fillCharacter;
			}
		}
		min_x = 6;
		min_y = 1;
		max_x = 8;
		max_y = 13;
		/*

		~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~
		|         * * * * *         |
		|         * * * * *         |
		|         * * * * *         |
		|         * * * * *         |
		| * * * * * * * * * * * * * |
		| * * * * * * * * * * * * * |
		| * * * * * * * * * * * * * |
		| * * * * * * * * * * * * * |
		| * * * * * * * * * * * * * |
		|         * * * * *         |
		|         * * * * *         |
		|         * * * * *         |
		|         * * * * *         |
		| ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~
		*/
		break;
	}




}

void MapGen::MapThingSpawns(int m_len, int m_wid)
{
	int EType;
	srand(time(NULL));
	for (int height = 0; height < m_len; height++) {
		for (int width = 0; width < m_wid; width++) {
			if (RoomSize[height][width] == 'X') {
				EType = rand() % 4 + 1;
				switch (EType)
				{
				case(1):
					RoomSize[height][width] = 'E';
					break;
				case(2):
					RoomSize[height][width] = 'G';
					break;
				case(3):
					RoomSize[height][width] = 'M';
					break;
				case(4):
					RoomSize[height][width] = 'T';
					break;
				}
			}
			cout << " " << RoomSize[height][width];
		}
		cout << endl;
	}
}

void MapGen::ListStuff(int m_len, int m_wid)
{
	int stufflistnum = 1;
	cout << endl << "All Things Found In the Room" << endl;
	for (int height = 0; height < m_len; height++) {
		for (int width = 0; width < m_wid; width++) {
			if (RoomSize[height][width] == 'T') {
				cout << stufflistnum << ". " << "Tree" << endl;
				stufflistnum++;
			}
			else if (RoomSize[height][width] == 'E') {
				cout << stufflistnum << ". " << "Enemy" << endl;
				stufflistnum++;
			}
			else if (RoomSize[height][width] == 'M') {
				cout << stufflistnum << ". " << "Mana" << endl;
				stufflistnum++;
			}
			else if (RoomSize[height][width] == 'G') {
				cout << stufflistnum << ". " << "Gold" << endl;
				stufflistnum++;
			}
		}
	}
}

void MapGen::ClsRest()
{
	system("cls");
}


