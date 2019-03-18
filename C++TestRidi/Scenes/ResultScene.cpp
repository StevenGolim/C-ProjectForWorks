#include "ResultScene.h"
#include "../GameManager/GameManager.h"


ResultScene::ResultScene()
{
}


ResultScene::~ResultScene()
{
}

void ResultScene::Update()
{
	std::cout << "íÑ‚ÍF" << std::endl;
	int win, lose, tie;
	GameManager::getInstance().GetResult(win, lose, tie);
	std::cout << win << " Ÿ " << lose << " ”s " << tie << " ˆø‚«•ª‚¯" << std::endl;

	Sleep(1000);

	std::cout << " Y‚Å‚à‚¤ˆê“x—V‚Ô" << std::endl;
	char play;
	std::cin >> play;
	if (play == 'y') { GameManager::getInstance().ChangeScene(GameManager::Scene::GAME); }
}
