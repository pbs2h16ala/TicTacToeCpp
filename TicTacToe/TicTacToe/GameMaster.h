#pragma once

#include <iostream>
#include <iomanip>
#include <string>
#include <memory>
#include "Console.h"
#include "Enums.h"



class GameMaster
{
private:

	bool isAnyGameActive;
	bool shouldStartNewGame;

public:
	GameMaster() {};
	~GameMaster() {};
	static std::shared_ptr<GameMaster> newShared();
	void setup();

	Enums::InputCommand requestForNewGame();
	void runNewGameLoop();
	void startNewMatch();


}; // Hier Semikolon nicht vergessen