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
	std::cout << "��т́F" << std::endl;
	int win, lose, tie;
	GameManager::getInstance()->GetResult(win, lose, tie);
	std::cout << win << " �� " << lose << " �s " << tie << " ��������" << std::endl;

	Sleep(1000);

	std::cout << " Y�ł�����x�V��" << std::endl;
	char play;
	std::cin >> play;
	if (play == 'y') { GameManager::getInstance()->ChangeScene(GameManager::Scene::GAME); }
}
