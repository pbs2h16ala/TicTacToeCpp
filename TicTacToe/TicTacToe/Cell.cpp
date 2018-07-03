// TicTacToe.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Player.cpp"
#include "GameField.cpp"


class Cell
{
private:

	int x, y, ownerOfMark;

public:
	Cell(int x, int y);
	~Cell();
	int getOwnerOfMark();
	int getX();
	int getY();

}; // Hier Semikolon nicht vergessen

Cell::Cell(int x, int y)
{
	ownerOfMark = 0;
}

Cell::~Cell()
{

}

// Method Implementation
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