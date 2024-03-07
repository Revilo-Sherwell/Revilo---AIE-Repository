#include "Mana.h"
#include <iostream>
using namespace std;

Mana::Mana()
{
	srand(time(NULL));
	ManaAmount = rand() % 20 + 8;
}

Mana::~Mana()
{

}

void Mana::Description() const
{
	cout << "You Have Found " << ManaAmount << "Mana" << endl;
}

void Mana::Use()
{
	Description();
}
