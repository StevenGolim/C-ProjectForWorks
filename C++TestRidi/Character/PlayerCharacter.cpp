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
		std::cout << "�Z��I�ׂ� (���I�� = 0 , ���� = 1 , �`���L= 2 , �p�[ = 3):" << std::endl;
		char move;
		std::cin >> move;
		std::cout << std::endl;
		switch (move)
		{
		case '1': curMove = Move::Rock; return Move::Rock;
		case '2': curMove = Move::Scissor; return Move::Scissor;
		case '3': curMove = Move::Paper; return Move::Paper;
		default: std::cout << "���̋Z�͂Ȃ��B�P�A�Q�C�R�̂������͂���" << std::endl;
		}
	}

}


