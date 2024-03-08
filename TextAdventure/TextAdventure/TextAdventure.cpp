#include <iostream>
#include "Game.h"
#include "MapGen.h"
#include "StringSystem.h"
 
using namespace std;
int x;

int main()
{
	cout << "The labyrinth" << endl;
	cout << endl;

	cout << "-PLAY-" << endl;
	cout << endl;
	cout << "-CREDITS-" << endl;
	cout << endl;
	cin >> x;

	if (x == 1) {
		Game main;
		main.Run();
	}
	

}


