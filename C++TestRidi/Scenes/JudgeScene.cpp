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


Result resultArray[4][4] = { {Lose, Lose, Lose, Lose},
								{Lose, Tie, Win, Lose},
								{Lose, Lose, Tie, Win },
								{Lose, Win, Lose, Tie} };
JudgeScene::JudgeScene()
{
}


JudgeScene::~JudgeScene()
{
}

void JudgeScene::show_winner(Move user, Move comp)
{
	for (time_t t = time(0) + 1; time(0) < t;) {}
	std::cout <<"���ʂ́F" << std::endl;
	std::cout << resultArray[user][comp] << std::endl;
	gameM->UpdateResult(resultArray[user][comp]);
}

void JudgeScene::Update()
{
	show_winner(gameM->GetCurPlayerMove(),gameM->GetCurCompMove());
	Sleep(1000);
	gameM->ChangeScene(GameManager::Scene::RESULT);
}
