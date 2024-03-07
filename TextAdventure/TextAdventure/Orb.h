#pragma once
#include "itemclass.h"

class Orb : public itemclass
{
public:
	Orb();
	~Orb();
public:
	void Description() const override;
	void Use() override;
	int OrbCounter = 0;
	int OrbAmount = 4;
};

