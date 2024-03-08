#include "Gold.h"
#include <iostream>
#include "Game.h"

using namespace std;

Gold::Gold(int a_y, int a_x)
{
	srand(time(NULL));
	GoldAmount = rand() % 4 + 1;

	x = a_x;
	y = a_y;
}

Gold::~Gold()
{
}

void Gold::Description() const 
{
	cout << "You Have Picked Up " << GoldAmount << " Gold!!" << endl;
}

void Gold::Use()
{
	Description();
	Game::GetInstance()->Gold += GoldAmount;
}
