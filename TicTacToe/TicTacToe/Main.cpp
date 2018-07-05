
#include "GameMaster.h"
#include "windows.h"


	std::shared_ptr<GameMaster> gm;

	int main()
	{
		gm = GameMaster::init();



		gm->appStartMessage();
		

		return 0;
	}
