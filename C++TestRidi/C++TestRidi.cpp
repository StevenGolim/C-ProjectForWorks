// C++TestRidi.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <windows.h>
#include <ctime>
#include <cstdlib>
#include <string>
#include "../C++TestRidi/GameManager/GameManager.h"


GameManager * gameM;

int main()
{
	gameM = new GameManager();
	gameM->Initialize();
	gameM->ChangeScene(GameManager::Scene::TITLE);
	srand(time(NULL));
	while (true) {
		gameM->UpdateCurrentScene();
	}
	return 0;
}


