#pragma once
#include "BaseScene.h"
#include <iostream>
#include <windows.h>
#include <cstdlib>
#include <string>

class TitleScene :
	public BaseScene
{
public:
	TitleScene();
	~TitleScene();
	void Update();
};

