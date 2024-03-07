#pragma once
#include "itemclass.h"
class Gold : public itemclass
{
public:
	Gold();
	~Gold();
public:
	void Description() const override;
	void Use() override;
	int GoldAmount = 0;

private:
};

