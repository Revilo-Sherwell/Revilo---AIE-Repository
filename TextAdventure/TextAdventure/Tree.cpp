#include "Tree.h"
#include <iostream>
using namespace std;

Tree::Tree(int a_y, int a_x)
{
	x = a_x;
	y = a_y;
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
