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
	std::cout << "����񂯂�Q�[��....................S�ŃX�^�[�g" << std::endl;
	char play;
	std::cin >> play;
	if (play == 's') { GameManager::getInstance()->ChangeScene(GameManager::Scene::GAME); }
}
