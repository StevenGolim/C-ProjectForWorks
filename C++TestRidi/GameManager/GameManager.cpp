#include "GameManager.h"



GameManager::GameManager()
{
}


GameManager::~GameManager()
{
}

void GameManager::Initialize()
{
	player = new PlayerCharacter();
	comp = new NonPlayerCharacter();
	wlt.win = 0;
	wlt.lose = 0;
	wlt.tie = 0;
}

Move GameManager::DecidePlayerMove()
{
	return player->GetMove();
}

Move GameManager::GetCurPlayerMove()
{
	return player->GetCurMove();
}

Move GameManager::GetCompMove()
{
	return comp->GetMove();
}

Move GameManager::GetCurCompMove()
{
	return comp->GetCurMove();
}

void GameManager::ChangeScene(Scene scene)
{
	switch (scene) {          //�����̃V�[��
	case Scene::TITLE:
		m_cScene = new TitleScene();      //�^�C�g���V�[�������݂̃V�[���ɂ���
		break;
	case Scene::GAME:
		m_cScene = new GameScene();       //�Q�[���V�[�������݂̃V�[���ɂ���
		break;
	case Scene::JUDGE:
		m_cScene = new JudgeScene();     //�W���b�W�V�[�������݂̃V�[���ɂ���
		break;
	case Scene::RESULT:
		m_cScene = new ResultScene();     //���U���g�V�[�������݂̃V�[���ɂ���
		break;
	default:
		break;
	}
}

void GameManager::UpdateCurrentScene()
{
	m_cScene->Update();
}

void GameManager::GetResult(int& win, int &lose, int &tie)
{
	win = wlt.win;
	lose = wlt.lose;
	tie = wlt.tie;
}

void GameManager::UpdateResult(Result r)
{
	switch (r)
	{
	case Win: wlt.win++;
		break;
	case Lose:wlt.lose++;
		break;
	case Tie:wlt.tie++;
		break;
	}
}
