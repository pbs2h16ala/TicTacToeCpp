
#include "AppDelegator.h"
#include <string>

	std::shared_ptr<AppDelegator> appDelegator;


	int main()
	{
		appDelegator = AppDelegator::newShared();
		appDelegator->setup();

		appDelegator->runLoop();

		return 0;
	}
