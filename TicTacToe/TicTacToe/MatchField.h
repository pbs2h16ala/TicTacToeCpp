#pragma once

#include "Player.cpp"
#include <vector>


class MatchField
{
private:
	//std::vector

public:
	MatchField();
	~MatchField();
	void initEmptyGameField();
	void initEmptyGameField(int sizeX, int sizeY);

	bool isCellEmpty(int x, int y);


}; // Hier Semikolon nicht vergessen