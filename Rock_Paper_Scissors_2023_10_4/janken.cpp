#include <iostream>
#include <cstdlib>
using namespace std;


bool JankenGameLoop()
{
	time_t t;
	srand(time(&t) % RAND_MAX);

	// ����񂯂�̎������
	int player = 0;
	int enemy = 0;

	const char* janken[] = { "�O�[", "�p�[", "�`���L"};

	cout << "����񂯂�. . ." << endl;
	cout << "> " << flush;
	cin >> player;
	cout << "���Ȃ��F" << janken[player - 1] << endl;

	// cp�̎���P�`�R�ŏ�����
	enemy = rand() % 3 + 1;

	cout << "����" << janken[enemy -1] << "�ł�" << endl;;

	// �o������̍��ɂ���ď��s���������B
	int diff = player - enemy;

	// �������̂Ƃ�
	if (diff == 0) 
	{
		cout << "aiko" << endl;
		return false; 	
	}

	// ���s����
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
