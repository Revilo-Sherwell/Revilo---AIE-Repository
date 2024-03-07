#pragma once
#include "itemclass.h"
class Tree : public itemclass
{
public:
	Tree();
	~Tree();

public:
	void Description() const override;
	void Use() override;
private:

};

