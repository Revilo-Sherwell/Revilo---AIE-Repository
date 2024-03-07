#include "Gold.h"
#include <iostream>

using namespace std;

Gold::Gold()
{
	srand(time(NULL));
	 GoldAmount = rand() % 4 + 1;
}

Gold::~Gold()
{
}

void Gold::Description() const 
{
	cout << "You Have Found " << GoldAmount << " Gold!!" << endl;
}

void Gold::Use()
{
	Description();
}
