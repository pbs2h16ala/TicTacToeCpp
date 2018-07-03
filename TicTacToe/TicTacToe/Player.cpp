// Player.cpp : Defines the Player related data and functions for the game.
//

#include "stdafx.h"


class Player
{
private:
	bool isBot;
	int difficulty;

public:
	Player();
	~Player();
	void init(bool isBot);

}; // Hier Semikolon nicht vergessen



   // Method Implementation
Player::Player()
{

}

Player::~Player()
{

}

void Player::init(bool pIsBot, int pDifficulty)
{
	isBot = pIsBot;
	difficulty = pDifficulty;

	if (isBot)
	{
		initPlayerBot();
	}
	else
	{

	}
}