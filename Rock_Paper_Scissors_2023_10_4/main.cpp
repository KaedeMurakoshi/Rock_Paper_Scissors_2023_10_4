#include <iostream>
#include"janken.h"
#include"kazuate.h"
using namespace std;

int Select()
{
	int select = 0;
	cout << "1.����񂯂� 2.�����ăQ�[�� > " << flush;
	cin >> select;

	if (select == 1 || select == 2) return select;

	cout << "1 or 2" << endl;
	// ���[�v
	Select();
}

int main()
{	
	switch (Select())
	{
	case 1: cout << "<<1.�O�[ 2. �p�[ 3.�`���L>>" << endl;
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

