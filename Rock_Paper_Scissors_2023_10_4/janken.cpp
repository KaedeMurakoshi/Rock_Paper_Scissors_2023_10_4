#include <iostream>
#include <cstdlib>
using namespace std;


bool JankenGameLoop()
{
	time_t t;
	srand(time(&t) % RAND_MAX);

	// じゃんけんの手を入れる
	int player = 0;
	int enemy = 0;

	const char* janken[] = { "グー", "パー", "チョキ"};

	cout << "じゃんけん. . ." << endl;
	cout << "> " << flush;
	cin >> player;
	cout << "あなた：" << janken[player - 1] << endl;

	// cpの手を１〜３で初期化
	enemy = rand() % 3 + 1;

	cout << "私は" << janken[enemy -1] << "です" << endl;;

	// 出した手の差によって勝敗判定をする。
	int diff = player - enemy;

	// あいこのとき
	if (diff == 0) 
	{
		cout << "aiko" << endl;
		return false; 	
	}

	// 勝敗判定
	switch (diff)
	{
	case -2: cout << "u win"; break;
	case -1: cout << "u lose"; break;
	case 1: cout << "u win"; break;
	case 2: cout << "u lose"; break;
	default:
		break;
	}

	return true;
}
