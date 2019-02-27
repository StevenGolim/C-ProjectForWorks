#pragma once
#include "Character.h"
#include <iostream>
#include <windows.h>
#include <ctime>
#include <cstdlib>
#include <string>

class NonPlayerCharacter :
	public Character
{
public:
	NonPlayerCharacter();
	~NonPlayerCharacter();
	Move GetMove();
};

