#include "MapGen.h"
#include <iostream>
using namespace std;

MapGen::MapGen(){
	MapSetup();
	MapGenMathSetup(15, 15);
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
	int RoomStyle;
	RoomStyle = rand() % 5 + 1;



	int min_x;//top left minimum, bottom right maximum
	int min_y;
	int max_x;
	int max_y;
	char fillCharacter = '*';


	for (int i = 0; i < m_len; i++) {
		RoomSize[i][0] = '|';
		RoomSize[i][m_len -1] = '|';
		RoomSize[0][i] = '~';
		RoomSize[m_len -1][i] = '~';
	}

	for (int height = 1; height < m_len - 1; height++) {
		for (int width = 1; width < m_wid - 1; width++) {
			RoomSize[height][width] = ' ';
		}
	}
	
	switch (RoomStyle)
	{
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
	}
	





	for (int x = min_x; x <= max_x; x++) {
		for (int y = min_y; y <= max_y; y++) {
			RoomSize[x][y] = fillCharacter;
		}
	}

	for (int height = 0; height < m_len; height++) {
		for (int width = 0; width < m_wid; width++) {
			cout <<" " << RoomSize[height][width];
		}
		cout << endl;
	}

	char x;
	cin >> x;
}
