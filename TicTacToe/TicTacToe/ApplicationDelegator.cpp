// TicTacToe.cpp : Defines the entry point for the console application.
//


class ApplicationDelegator
{
private:
	int appStatus;
public:
	ApplicationDelegator();
	~ApplicationDelegator();
	void init();
	static void appStartMessage();

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
