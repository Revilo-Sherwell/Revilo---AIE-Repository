#pragma once
#include "itemclass.h"

class Mana : public itemclass
{
public:
	 Mana();
	~Mana();
public:
	void Description() const override;
	void Use() override;
	int ManaAmount = 0;
};

