// TicTacToe.cpp : Defines the entry point for the console application.
//

#include "Cell.h"

std::shared_ptr<Cell> Cell::newShared()
{
	return std::make_shared<Cell>();
}

// Method Implementation
void Cell::setup(int x, int y, int owner)
{
	this->x = x;
	this->y = y;
	this->ownerOfMark = owner;
}

int Cell::getOwnerOfMark()
{
	return ownerOfMark;
}

int Cell::getX()
{
	return x;
}

int Cell::getY()
{
	return y;
}

std::string Cell::toString() 
{
	return "x: " + std::to_string(this->x) + "  y: " + std::to_string(this->y) + "  ownerOfMark: " + std::to_string(this->ownerOfMark) + "\n";
}