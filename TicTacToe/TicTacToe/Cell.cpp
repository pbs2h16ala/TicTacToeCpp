// TicTacToe.cpp : Defines the entry point for the console application.
//

#include "Cell.h"

std::shared_ptr<Cell> Cell::getShared()
{
	return std::shared_ptr<Cell>();
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