// TicTacToe.cpp : Defines the entry point for the console application.
//
#include "MatchField.h"


   // Method Implementation
MatchField::MatchField()
{

}

MatchField::~MatchField()
{

}

std::shared_ptr<MatchField> MatchField::init()
{
	return std::shared_ptr<MatchField>();
}

// Game

void MatchField::initEmptyMatchField(int sizeX = 3, int sizeY = 3)
{
	std::shared_ptr<Cell> cellToInit;

	for (int x = 0; x < sizeX; x++)
	{
		for (int y = 0; y < sizeY; y++)
		{
			cellToInit = Cell::getShared();
			cellToInit->setup(x,y,0);

			//this->vc_MatchField.a
		}
	}
}

bool MatchField::isCellEmpty(int x, int y)
{
	return true;
}

void MatchField::markCellForPlayer(Player player)
{

}
