#include "JudgeScene.h"


std::ostream& operator<<(std::ostream& out, Result r)
{
	switch (r)
	{
	case Win:		out << "勝利や";  break;
	case Lose:		out << "負けや";		break;
	case Tie:		out << "引き分けや";  break;
	default:		out << "";
	}

	return out;
}

#define HAND_PATTERN 4 //０：なし １：ぐう　２：チョキ　3：パー

//プレイヤーと相手の手の比較パターン
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
	std::cout <<"結果は：" << std::endl;
	std::cout << resultArray[user][comp] << std::endl;
	GameManager::getInstance().UpdateResult(resultArray[user][comp]);
	std::cout << std::endl;
}

void JudgeScene::Update()
{
	ShowWinner(GameManager::getInstance().GetCurPlayerMove(), GameManager::getInstance().GetCurCompMove());
	Sleep(1000);
	GameManager::getInstance().ChangeScene(GameManager::Scene::RESULT);
}
