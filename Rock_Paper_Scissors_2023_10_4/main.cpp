#include <iostream>
#include"janken.h"
#include"kazuate.h"
using namespace std;

int Select()
{
	// 0�ŏI���������̂�...
	int select = -1;

	// �P�`�Q����͂���܂Ōp��
	while (select < 0 || select > 2)
	{
		select = 0;
		cout << "1.����񂯂� 2.�����ăQ�[�� 0.�I�� > " << flush;
		cin >> select;
	}
	return select;
}

int main()
{	
	// �p������
	bool loopGame = true;

	while (loopGame)
	{
		// Select()�ŏ�������
		switch (Select())
		{
		case 0: 
			loopGame = false; 
			cout << "�I�����܂��A�����l�ł����B:D" << endl;
			break;
		case 1: 
			cout << "<<1.�O�[ 2. �p�[ 3.�`���L>>" << endl;
			cout << endl;
			// ���s�����܂Ń��[�v
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

