#include <iostream>
#include <cstdlib>

#define DEBUG // ��`���O�����́A���̂P�s���R�����g�A�E�g����B

using namespace std;

void KazuateLoop()
{
	time_t t;
	srand(time(&t) % RAND_MAX);
	
	// �P�`�P�O�O�ŏ�����
	int randNum = rand() % 100 + 1;

#ifdef DEBUG
	cout << randNum << endl;
#endif // DEBUG

	// �v���C���[���͗p
	int predictNum = 0;
	
	// ��������܂Ōp��
	while (predictNum != randNum)
	{
		cout << "�P�`�P�O�O�̊ԂŐ�����\�z���Ă������� > " << flush;
		// ������
		predictNum = 0;

		// �K�؂Ȓl����͂���܂Ōp��
		while (predictNum < 1 || predictNum > 100)
		{			
			cin >> predictNum;
		}

		// �����̂Ƃ�
		if (predictNum == randNum) 
		{
			cout << "�����I :)" << endl;
			return;
		}

		// �s����
		cout << "������" << ((predictNum > randNum) ? "���������� :<" : "���������� :>") << endl;
	}	
}
