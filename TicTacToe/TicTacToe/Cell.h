#pragma once

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

};
