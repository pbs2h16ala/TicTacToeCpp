// TicTacToe.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


class ApplicationDelegator
{
private:
	int appStatus;
public:
	ApplicationDelegator();
	~ApplicationDelegator();
	void init();
	void addiereMonat(int n);
	void addiereTag(int n);
}; // Hier Semikolon nicht vergessen



// Method Implementation
ApplicationDelegator::ApplicationDelegator()
{

}

ApplicationDelegator::~ApplicationDelegator()
{

}

void ApplicationDelegator::init()
{
	ApplicationDelegator::appStatus = 0;
}