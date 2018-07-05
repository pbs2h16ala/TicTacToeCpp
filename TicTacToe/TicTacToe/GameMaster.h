#pragma once

#include <iostream>
#include <iomanip>
#include <string>
#include <memory>


class GameMaster
{
private:

	bool shouldStartNewGame;
public:
	GameMaster() {};
	~GameMaster() {};
	static std::shared_ptr<GameMaster> newShared();
	void setup();

	void requestForNewGame();
	void setGameStartIfPossible();
	void appStartMessage();


}; // Hier Semikolon nicht vergessen