#include "Orb.h"
#include <iostream>
using namespace std;

Orb::Orb()
{
}

Orb::~Orb()
{
}

void Orb::Description() const
{
	cout << "OOoo You Found A Orb This Can Be Use to Open The Gate To" << endl;
	cout << "To Leave This Place All You Need is " << OrbAmount << " More Orbs" << endl;
}

void Orb::Use()
{
	Description();
	OrbAmount - 1;
	OrbCounter + 1;
}
