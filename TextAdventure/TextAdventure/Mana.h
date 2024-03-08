#pragma once
#include "itemclass.h"

class Mana : public itemclass
{
public:
	 Mana(int a_y, int a_x);
	~Mana();
public:
	void Description() const override;
	void Use() override;
	int ManaAmount = 0;
};

