#include "Tree.h"
#include <iostream>
using namespace std;

Tree::Tree()
{
	
}

Tree::~Tree()
{
}

void Tree::Description() const
{
	cout << "Wow Thats A Really Nice Tree" << endl;
}

void Tree::Use()
{
	Description();
}
