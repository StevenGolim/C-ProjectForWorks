#include "GameScene.h"
#include "../GameManager/GameManager.h"
#include "../Character/Character.h"

//�\���p�̃I�y���^�[�ǉ�
std::ostream& operator<<(std::ostream& out, Move m)
{
	switch (m)
	{
	case Move::Rock:			out << "����"; break;
	case Move::Scissor:			out << "�`���L"; break;
	case Move::Paper:			out << "�p�["; break;
	default:					 out << "�������";
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
	Move playerMove = gameM->DecidePlayerMove();
	Move compMove = gameM->GetCompMove();

	std::cout << "�N�̋Z : " << playerMove << "\n"
			<< "����̋Z : " << compMove << "\n"
			<< std::endl;
	Sleep(1000);

	gameM->ChangeScene(GameManager::Scene::JUDGE);
}
