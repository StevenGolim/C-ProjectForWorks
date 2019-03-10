#pragma once
#include "BaseScene.h"
#include "../GameManager/GameManager.h"




class JudgeScene :
	public BaseScene
{
private:
	

public:
	JudgeScene();
	~JudgeScene();
	void ShowWinner(Move user, Move comp);
	void Update();
};


