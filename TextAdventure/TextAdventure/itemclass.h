#pragma once
class itemclass
{
public:
	int x = -1;
	int y = -1;

	virtual void Description() const = 0;
	virtual void Use() = 0;
};

