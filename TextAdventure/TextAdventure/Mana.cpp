#include "Mana.h"
#include <iostream>
#include "Game.h"
using namespace std;

Mana::Mana(int a_y, int a_x)
{
	srand(time(NULL));
	ManaAmount = rand() % 20 + 8;

	x = a_x;
	y = a_y;
}

Mana::~Mana()
{

}

void Mana::Description() const
{
	cout << "You Have Picked Up " << ManaAmount << " Mana" << endl;
}

void Mana::Use()
{
	Description();
	Game::GetInstance()->ManaCount += ManaAmount;
}
