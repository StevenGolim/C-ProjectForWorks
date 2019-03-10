#include "JudgeScene.h"


std::ostream& operator<<(std::ostream& out, Result r)
{
	switch (r)
	{
	case Win:		out << "������";  break;
	case Lose:		out << "������";		break;
	case Tie:		out << "����������";  break;
	default:		out << "";
	}

	return out;
}

#define HAND_PATTERN 4 //�O�F�Ȃ� �P�F�����@�Q�F�`���L�@3�F�p�[

//�v���C���[�Ƒ���̎�̔�r�p�^�[��
const Result resultArray[HAND_PATTERN][HAND_PATTERN] = {	{Lose, Lose, Lose, Lose},
															{Lose, Tie, Win, Lose},
															{Lose, Lose, Tie, Win },
															{Lose, Win, Lose, Tie} };
JudgeScene::JudgeScene()
{
}


JudgeScene::~JudgeScene()
{
}

void JudgeScene::ShowWinner(Move user, Move comp)
{
	for (time_t t = time(0) + 1; time(0) < t;) {}
	std::cout <<"���ʂ́F" << std::endl;
	std::cout << resultArray[user][comp] << std::endl;
	GameManager::getInstance()->UpdateResult(resultArray[user][comp]);
	std::cout << std::endl;
}

void JudgeScene::Update()
{
	ShowWinner(GameManager::getInstance()->GetCurPlayerMove(), GameManager::getInstance()->GetCurCompMove());
	Sleep(1000);
	GameManager::getInstance()->ChangeScene(GameManager::Scene::RESULT);
}
