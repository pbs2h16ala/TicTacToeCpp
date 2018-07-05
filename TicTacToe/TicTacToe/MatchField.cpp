// TicTacToe.cpp : Defines the entry point for the console application.
//
#include "MatchField.h"
#include "DisplayOutput.h"
#include <iostream>


   // Method Implementation

std::shared_ptr<MatchField> MatchField::newShared()
{
	return std::shared_ptr<MatchField>();
}

// Game

void MatchField::setup()
{

}

void MatchField::initEmptyMatchField(int sizeX, int sizeY)
{
	std::shared_ptr<Cell> cellToInit;

	int index = 0;

	for (int x = 0; x < sizeX; x++)
	{
		for (int y = 0; y < sizeY; y++)
		{
			cellToInit = Cell::newShared();
			cellToInit->setup(x, y, 0);

			this->vc_MatchField[index] = cellToInit;
		}
	}
	DisplayOutput::appStartMessage();
}

bool MatchField::isCellEmpty(int x, int y)
{
	return true;
}

void MatchField::markCellForPlayer(Player player)
{

}
