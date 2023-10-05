#include <iostream>
#include"janken.h"
#include"kazuate.h"
using namespace std;

int Select()
{
	// 0で終了したいので...
	int select = -1;

	// １～２を入力するまで継続
	while (select < 0 || select > 2)
	{
		select = 0;
		cout << "1.じゃんけん 2.数当てゲーム 0.終了 > " << flush;
		cin >> select;
	}
	return select;
}

int main()
{	
	// 継続判定
	bool loopGame = true;

	while (loopGame)
	{
		// Select()で条件分岐
		switch (Select())
		{
		case 0: 
			loopGame = false; 
			cout << "終了します、お疲れ様でした。:D" << endl;
			break;
		case 1: 
			cout << "<<1.グー 2. パー 3.チョキ>>" << endl;
			cout << endl;
			// 勝敗がつくまでループ
			while (!JankenGameLoop())
			{

			}
			break;
		case 2:
			KazuateLoop(); break;
		default:
			break;
		}
	}		
}

