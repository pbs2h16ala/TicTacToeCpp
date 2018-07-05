
#include "GameMaster.h"


	std::shared_ptr<GameMaster> gm;

	int main()
	{
		gm = GameMaster::init();



		gm->appStartMessage();
		

		return 0;
	}
