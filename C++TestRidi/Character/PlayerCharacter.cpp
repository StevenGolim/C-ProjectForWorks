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
		std::cout << "技を選べや (未選択 = 0 , ぐう = 1 , チョキ= 2 , パー = 3):" << std::endl;
		char move;
		std::cin >> move;
		std::cout << std::endl;
		switch (move)
		{
		case '1': curMove = Move::Rock; return Move::Rock;
		case '2': curMove = Move::Scissor; return Move::Scissor;
		case '3': curMove = Move::Paper; return Move::Paper;
		default: std::cout << "その技はない。１、２，３のうち入力せえ" << std::endl;
		}
	}

}


