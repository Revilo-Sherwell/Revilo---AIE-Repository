#pragma once
#include <vector>
#include "StringSystem.h"
class Player
{
public:
	Player();
	~Player();
	bool FindSpell(Stringutil other);
private:
	std::vector< Stringutil> spells = {"Spawn","B","c"};
};



