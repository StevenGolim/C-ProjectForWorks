#include "TitleScene.h"
#include "../GameManager/GameManager.h"


TitleScene::TitleScene()
{
}


TitleScene::~TitleScene()
{
}

void TitleScene::Update()
{
	std::cout << "じゃんけんゲーム....................Sでスタート" << std::endl;
	char play;
	std::cin >> play;
	if (play == 's') { gameM->ChangeScene(GameManager::Scene::GAME); }
}
