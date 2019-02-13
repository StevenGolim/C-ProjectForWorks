// C++TestRidi.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <windows.h>
#include <ctime>
#include <cstdlib>
#include <string>


enum Move { Rock, Paper, Scissor };
enum Result { Tie, Lose, Win };

//表示用のオペレター追加
std::ostream& operator<<(std::ostream& out, Move m)
{
	switch (m)
	{
	case Rock:		 out << "ぐう"; break;
	case Paper:		 out << "パー"; break;
	case Scissor:    out << "チョキ"; break;
	default:		 out << "もう一回";
	}

	return out;
}
std::ostream& operator<<(std::ostream& out, Result r)
{
	switch (r)
	{
	case Tie:		out << "引き分けや"; break;
	case Lose:		out << "負けや";		break;
	case Win:		out << "勝利や"; break;
	default:		out << "";
	}

	return out;
}

//結果の配列化
Result resultArray[3][3] = { {Tie, Lose, Win},
							{Win, Tie, Lose },
							{Lose, Win, Tie} };

void show_winner(Move user, Move comp)
{
	for (time_t t = time(0) + 1; time(0) < t;) {}
	std::cout << resultArray[user][comp] << std::endl;
}

//Compの手
Move get_random_move()
{
	return (Move)(rand() % 3) ;
}

//自分の手
Move get_user_move()
{
	for (;;)
	{
		std::cout << "技を選べや (ぐう = 1 , パー = 2 , チョキ = 3):" << std::endl;
		char move;
		std::cin >> move;
		std::cout << std::endl;
		switch (move)
		{
		case '1': return Rock;
		case '2': return Paper;
		case '3': return Scissor;
		default: std::cout << "その技はない。１、２，３のうち入力せ" << std::endl;
		}
	}
}
int main()
{
	srand(time(NULL));
	while (true) {
		const Move user = get_user_move();
		const Move comp = get_random_move();

		std::cout   << "君の技 : " << user << "\n"
					<< "相手の技 : " << comp << "\n"
					<< std::endl;

		Sleep(1000);
		show_winner(user, comp);

		Sleep(1000);

		//もう一回プレイするか
		std::string again;
		std::cout << std::endl << "aでもう一回遊ぶ" << std::endl;
		std::cin >> again;
		if (again == "a") {}
		else break;

		std::cout << std::endl;
	}
	return 0;
}


