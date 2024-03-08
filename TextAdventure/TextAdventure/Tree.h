#pragma once
#include "itemclass.h"
class Tree : public itemclass
{
public:
	Tree(int a_y, int a_x);
	~Tree();

public:
	void Description() const override;
	void Use() override;
private:

};

