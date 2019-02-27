#include "PlayerCharacter.h"



PlayerCharacter::PlayerCharacter()
{
}


PlayerCharacter::~PlayerCharacter()
{
}

Move PlayerCharacter::GetMove()
{
	for (;;)
	{
		std::cout << "‹Z‚ð‘I‚×‚â (–¢‘I‘ð = 0 , ‚®‚¤ = 1 , ƒ`ƒ‡ƒL= 2 , ƒp[ = 3):" << std::endl;
		char move;
		std::cin >> move;
		std::cout << std::endl;
		switch (move)
		{
		case '1': curMove = Move::Rock; return Move::Rock;
		case '2': curMove = Move::Scissor; return Move::Scissor;
		case '3': curMove = Move::Paper; return Move::Paper;
		default: std::cout << "‚»‚Ì‹Z‚Í‚È‚¢B‚PA‚QC‚R‚Ì‚¤‚¿“ü—Í‚¹‚¦" << std::endl;
		}
	}

}


