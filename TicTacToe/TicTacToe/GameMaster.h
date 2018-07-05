#pragma once

#include <iostream>
#include <iomanip>
#include <string>
#include <memory>
#include "DisplayOutput.h"
#include "AppDelegator.h"


class GameMaster
{
private:

	bool shouldStartNewGame;
public:
	GameMaster() {};
	~GameMaster() {};
	static std::shared_ptr<GameMaster> newShared();
	void setup();

	AppDelegator::InputCommand requestForNewGame();
	void startNewMatch();


}; // Hier Semikolon nicht vergessen