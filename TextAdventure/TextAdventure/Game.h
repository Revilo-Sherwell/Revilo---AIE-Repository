#pragma once
class Game
{
public:
	Game();
	~Game();

public:

	int PlayerXpos = 7;
	int PlayerYpos = 7;


	int PlayerHealth = 100;
	int ManaCount = 50;
	int Gold = 0;

	int MapState;

private:
};

