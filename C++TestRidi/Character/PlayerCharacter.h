#pragma once
#include "Character.h"
#include <iostream>
#include <windows.h>
#include <ctime>
#include <cstdlib>
#include <string>

class PlayerCharacter :
	public Character
{
public:
	PlayerCharacter();
	~PlayerCharacter();
	Move GetMove();
};

