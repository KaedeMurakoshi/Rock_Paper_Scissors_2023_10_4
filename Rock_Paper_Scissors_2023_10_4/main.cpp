#include <iostream>
#include"janken.h"
#include"kazuate.h"
using namespace std;

int Select()
{
	int select = 0;
	cout << "1.じゃんけん 2.数当てゲーム > " << flush;
	cin >> select;

	if (select == 1 || select == 2) return select;

	cout << "1 or 2" << endl;
	// ループ
	Select();
}

int main()
{	
	switch (Select())
	{
	case 1: cout << "<<1.グー 2. パー 3.チョキ>>" << endl;
		cout << endl;

		while (!MainGameLoop())
		{

		}
		break;
	case 2:

		break;
	default:
		break;
	}	
}

