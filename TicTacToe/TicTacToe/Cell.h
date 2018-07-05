#pragma once
#include <memory>

class Cell
{
private:

	int x, y, ownerOfMark;

public:
	Cell() { };
	~Cell() { };
	static std::shared_ptr<Cell> getShared();

	void setup(int x, int y, int owner);
	int getOwnerOfMark();
	int getX();
	int getY();

};
