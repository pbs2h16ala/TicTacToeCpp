
#include "GameManager.cpp"


	std::unique_ptr<GameManager> gm;

	int main()
	{
		gm = GameManager::init();



		gm->appStartMessage();
		

		return 0;
	}
