// C++TestRidi.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <windows.h>
#include <ctime>
#include <cstdlib>
#include <string>


enum Move { Rock, Scissor, Paper};
enum Result { Tie, Lose, Win };
int win, lose, tie = 0;

//表示用のオペレター追加
std::ostream& operator<<(std::ostream& out, Move m)
{
	switch (m)
	{
	case Rock:		 out << "ぐう"; break;
	case Scissor:    out << "チョキ"; break;
	case Paper:		 out << "パー"; break;	
	default:		 out << "もう一回";
	}

	return out;
}
//結果表示用のオペレター追加　＋　戦歴更新
std::ostream& operator<<(std::ostream& out, Result r)
{
	switch (r)
	{
	case Tie:		out << "引き分けや"; tie += 1; break;
	case Lose:		out << "負けや";	lose += 1;	break;
	case Win:		out << "勝利や"; win += 1; break;
	default:		out << "";
	}

	return out;
}

//結果の配列化
Result resultArray[3][3] = { {Tie, Win, Lose},
							{Lose, Tie, Win },
							{Win, Lose, Tie} };

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
		std::cout << "技を選べや (未選択 = 0 , ぐう = 1 , パー = 2 , チョキ = 3):" << std::endl;
		char move;
		std::cin >> move;
		std::cout << std::endl;
		switch (move)
		{
		case '1': return Rock;
		case '2': return Paper;
		case '3': return Scissor;
		default: std::cout << "その技はない。１、２，３のうち入力せえ" << std::endl;
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
		std::cout << std::endl << "現在の戦歴: "<<win<<" 勝 " << lose << " 敗 " << tie << " 引き分け" << std::endl;

		std::cout << std::endl;
	}
	return 0;
}


