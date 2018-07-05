#pragma once
#include <vector>
#include "Player.h"
#include "Cell.h"
#include <memory>


class MatchField
{
private:
	std::vector<std::shared_ptr<Cell>> vc_MatchField;

public:
	MatchField() {};
	~MatchField() {};

	static std::shared_ptr<MatchField> newShared();
	void setup();

	void initEmptyMatchField(int x, int y);
	bool isCellEmpty(int x, int y);
	void markCellForPlayer(Player player);

}; // Hier Semikolon nicht vergessen