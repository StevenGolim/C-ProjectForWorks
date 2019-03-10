#pragma once
#include "../Character/Character.h"
#include "../Character/PlayerCharacter.h"
#include "../Character/NonPlayerCharacter.h"
#include "../Scenes/BaseScene.h"
#include "../Scenes/TitleScene.h"
#include "../Scenes/GameScene.h"
#include "../Scenes/JudgeScene.h"
#include "../Scenes/ResultScene.h"

enum Result
{
	Win,
	Lose,
	Tie
};

struct ResultRecord
{
	int win;
	int lose;
	int tie;
};

class GameManager
{
private:
	GameManager();
	BaseScene* m_cScene = NULL;               //現在のシーン
	Character* player = NULL;
	Character* comp = NULL;
	ResultRecord wlt;
	Move PlayerMove = None;
	static GameManager * gameM;
public:
	enum Scene {
		TITLE,
		GAME,
		JUDGE,
		RESULT
	};
	

	static GameManager* getInstance()
	{		
		if (gameM == NULL)gameM = new GameManager();
		return gameM;
	}
	~GameManager();
	void Initialize();
	Move DecidePlayerMove();
	Move GetCurPlayerMove();
	Move GetCompMove();
	Move GetCurCompMove();
	void ChangeScene(Scene scene);     //シーンを引数によって変える関数
	void UpdateCurrentScene();		//現在のシーンを更新する
	void GetResult(int &win, int &lose, int &tie);
	void UpdateResult(Result r);


};


