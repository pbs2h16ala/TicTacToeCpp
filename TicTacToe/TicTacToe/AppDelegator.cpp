// TicTacToe.cpp : Defines the entry point for the console application.
//


class AppDelegator
{
private:
	int appStatus;
public:
	AppDelegator();
	~AppDelegator();
	void init();

}; // Hier Semikolon nicht vergessen



// Method Implementation
AppDelegator::AppDelegator()
{

}

AppDelegator::~AppDelegator()
{

}

void AppDelegator::init()
{
	AppDelegator::appStatus = 0;
}
