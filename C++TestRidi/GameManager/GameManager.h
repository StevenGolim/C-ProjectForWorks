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
protected:
	BaseScene* m_cScene;               //���݂̃V�[��
	Character* player;
	Character* comp;
	ResultRecord wlt;
	Move PlayerMove = None;
public:
	enum Scene {
		TITLE,
		GAME,
		JUDGE,
		RESULT
	};
	GameManager();
	~GameManager();
	void Initialize();
	Move DecidePlayerMove();
	Move GetCurPlayerMove();
	Move GetCompMove();
	Move GetCurCompMove();
	void ChangeScene(Scene scene);     //�V�[���������ɂ���ĕς���֐�
	void UpdateCurrentScene();		//���݂̃V�[�����X�V����
	void GetResult(int &win, int &lose, int &tie);
	void UpdateResult(Result r);
};

extern GameManager * gameM;

