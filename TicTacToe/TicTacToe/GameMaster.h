#pragma once

#include <iostream>
#include <iomanip>
#include <string>
#include "Player.cpp"
#include <memory>


class GameMaster
{
private:
	GameMaster();
	~GameMaster();

	bool initNewGameIfPossible;
public:
	static std::unique_ptr<GameMaster> init();
	void setGameStartIfPossible();
	void appStartMessage();


}; // Hier Semikolon nicht vergessen