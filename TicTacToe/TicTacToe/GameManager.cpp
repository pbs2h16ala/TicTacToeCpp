// TicTacToe.cpp : Defines the entry point for the console application.
//
#include <iostream>
#include <iomanip>
#include <string>
#include "Player.cpp"
#include <memory>


class GameManager
{
private:
	GameManager();
	~GameManager();

	bool initNewGameIfPossible;
public:
	static std::unique_ptr<GameManager> init();
	void setGameStartIfPossible();
	void appStartMessage();


}; // Hier Semikolon nicht vergessen



   // Method Implementation
GameManager::GameManager()
{

}

GameManager::~GameManager()
{

}

std::unique_ptr<GameManager> GameManager::init()
{
	return std::make_unique<GameManager>();
}



void GameManager::setGameStartIfPossible()
{
	initNewGameIfPossible = true;
}

void GameManager::appStartMessage()
{
	std::cout << std::left << std::setw(15) << "Hello World";
}