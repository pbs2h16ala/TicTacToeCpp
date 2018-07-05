#pragma once

#include <iostream>
#include <iomanip>
#include <string>
#include <memory>


class GameMaster
{
private:
	GameMaster();
	~GameMaster();

	bool initNewGameIfPossible;
public:
	static std::shared_ptr<GameMaster> init();
	void setGameStartIfPossible();
	void appStartMessage();


}; // Hier Semikolon nicht vergessen