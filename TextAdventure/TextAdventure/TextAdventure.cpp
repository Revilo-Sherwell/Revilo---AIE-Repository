#include <iostream>
#include "Game.h"
#include "MapGen.h"
#include "StringSystem.h"
 
using namespace std;
int mainscreen = 0;

int main()
{
	Stringutil strmain;
	bool mainmenu = true;
	while (mainmenu == true)
	{
		system("cls");

		if (mainscreen == 0) {
			cout << " ---------------------------------------------------------------" << endl;
			cout << "  _____ _            _       _                _       _   _     " << endl;
			cout << " |_   _| |__   ___  | | __ _| |__  _   _ _ __(_)_ __ | |_| |__  " << endl;
			cout << "   | | | '_ \\ / _ \\ | |/ _` | '_ \\| | | | '__| | '_ \\| __| '_ \\ " << endl;
			cout << "   | | | | | |  __/ | | (_| | |_) | |_| | |  | | | | | |_| | | |" << endl;
			cout << "   |_| |_| |_|\\___| |_|\\__,_|_.__/ \\__, |_|  |_|_| |_|\\__|_| |_|" << endl;
			cout << "                                   |___/                        " << endl;
			cout << " ---------------------------------------------------------------" << endl;
			cout << endl;
			cout << "                             --------" << endl;
			cout << "                             |-Play-|" << endl;
			cout << "                             --------" << endl;
			cout << endl;
			cout << "                             -CREDITS-" << endl;
			cout << endl;
			cout << " ---------------------------------------------------------------" << endl;
		}

		if (mainscreen == 1) {
			cout << endl;
			cout << " ---------------------------------------------------------------" << endl;
			cout << endl;
			cout << "                             -CREDITS-" << endl;
			cout << endl;
			cout << "                          Oliver Sherwell" << endl;
			cout << "                            As Programer" << endl;
			cout << endl;
			cout << " ---------------------------------------------------------------" << endl;
			cout << "  Type Back To Get To Main Menu" << endl;
			cout << " ---------------------------------------------------------------" << endl;
		}

		strmain.ReadFromConsole();
		strmain.Thetolower();
		switch (strmain.CharacterAt(0))
		{
		case'p':
			if (strmain.find("play") != -1) {
				mainmenu = false;
			}
		case'c':
			if (strmain.find("credits") != -1) {
				mainscreen = 1;
			}
		case'b':
			if (strmain.find("back") != -1) {
				mainscreen = 0;
			}
		}
	}
	Game main;
	main.Run();
}


