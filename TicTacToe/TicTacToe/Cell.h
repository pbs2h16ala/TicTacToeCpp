#pragma once
#include <memory>
#include <string>

class Cell
{
private:

	int x, y, ownerOfMark;

public:
	Cell() { };
	~Cell() { };
	static std::shared_ptr<Cell> newShared();

	void setup(int x, int y, int owner);
	int getOwnerOfMark();
	int getX();
	int getY();
	std::string toString();

};
