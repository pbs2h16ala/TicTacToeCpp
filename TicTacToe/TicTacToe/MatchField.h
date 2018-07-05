#pragma once
#include <vector>
#include "Player.h"


class MatchField
{
private:
	//std::vector

public:
	MatchField();
	~MatchField();
	void initEmptyMatchField();
	void initEmptyMatchField(int x, int y);

	bool isCellEmpty(int x, int y);
	void markCellForPlayer(Player player);

}; // Hier Semikolon nicht vergessen