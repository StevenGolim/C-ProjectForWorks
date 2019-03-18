// C++TestRidi.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <windows.h>
#include <ctime>
#include <cstdlib>
#include <string>
#include "../C++TestRidi/GameManager/GameManager.h"




int main()
{
	GameManager::getInstance().Initialize();
	GameManager::getInstance().ChangeScene(GameManager::Scene::TITLE);
	srand((unsigned int)time(NULL));
	while (true) {
		GameManager::getInstance().UpdateCurrentScene();
	}
	return 0;
}


