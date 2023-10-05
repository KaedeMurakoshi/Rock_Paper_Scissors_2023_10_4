#include <iostream>
#include <cstdlib>
using namespace std;

void KazuateLoop()
{
	time_t t;
	srand(time(&t) % RAND_MAX);
	
	// １〜１００で初期化
	int randNum = rand() % 100 + 1;
	// デバッグ用
	cout << randNum << endl;

	// プレイヤー入力用
	int predictNum = 0;
	
	// 正解するまで継続
	while (predictNum != randNum)
	{
		cout << "１〜１００の間で数字を予想してください > " << flush;
		// 初期化
		predictNum = 0;

		// 適切な値を入力するまで継続
		while (predictNum < 1 || predictNum > 100)
		{			
			cin >> predictNum;
		}

		// 正解のとき
		if (predictNum == randNum) 
		{
			cout << "正解！ :)" << endl;
			return;
		}

		// 不正解
		cout << "もっと" << ((predictNum > randNum) ? "ちいさいよ :<" : "おおきいよ :>") << endl;
	}	
}
