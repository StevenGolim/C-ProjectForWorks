#include "GameScene.h"
#include "../GameManager/GameManager.h"
#include "../Character/Character.h"

//表示用のオペレター追加
std::ostream& operator<<(std::ostream& out, Move m)
{
	switch (m)
	{
	case Move::Rock:			out << "ぐう"; break;
	case Move::Scissor:			out << "チョキ"; break;
	case Move::Paper:			out << "パー"; break;
	default:					 out << "もう一回";
	}

	return out;
}

GameScene::GameScene()
{
}


GameScene::~GameScene()
{
}

void GameScene::Update()
{
	Move playerMove = GameManager::getInstance()->DecidePlayerMove();
	Move compMove = GameManager::getInstance()->GetCompMove();

	std::cout << "君の技 : " << playerMove << "\n"
			<< "相手の技 : " << compMove << "\n"
			<< std::endl;
	Sleep(1000);

	GameManager::getInstance()->ChangeScene(GameManager::Scene::JUDGE);
}
