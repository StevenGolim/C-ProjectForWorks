#include "NonPlayerCharacter.h"



NonPlayerCharacter::NonPlayerCharacter()
{
}


NonPlayerCharacter::~NonPlayerCharacter()
{
}

Move NonPlayerCharacter::GetMove()
{
	int move = 
		((rand() %  (static_cast<int>(Move::MoveMax) - static_cast<int>(Move::MoveMin))) + static_cast<int>(Move::MoveMin));
	switch (move)
	{
	case 1: curMove = Move::Rock; return Move::Rock;
	case 2: curMove = Move::Scissor; return Move::Scissor;
	case 3: curMove = Move::Paper; return Move::Paper;
	default: curMove = Move::None; return Move::None;
	}

}
