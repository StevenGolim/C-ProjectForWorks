#pragma once

enum Move
{
	None = 0,
	MoveMin = 1,
	Rock = MoveMin,
	Scissor,
	Paper,
	MoveMax = 4
};

class Character
{
public:
	Move curMove;
public:
	Character();
	virtual ~Character();
	virtual Move GetMove() { return Move::None; }
	virtual Move GetCurMove() { return curMove; }
};

