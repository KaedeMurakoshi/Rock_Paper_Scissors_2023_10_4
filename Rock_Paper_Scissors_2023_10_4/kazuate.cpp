#include <iostream>
#include <cstdlib>
using namespace std;

void KazuateLoop()
{
	time_t t;
	srand(time(&t) % RAND_MAX);
	
	// ‚P`‚P‚O‚O‚Å‰Šú‰»
	int randNum = rand() % 100 + 1;
	// ƒfƒoƒbƒO—p
	cout << randNum << endl;

	// ƒvƒŒƒCƒ„[“ü—Í—p
	int predictNum = 0;
	
	// ³‰ğ‚·‚é‚Ü‚ÅŒp‘±
	while (predictNum != randNum)
	{
		cout << "‚P`‚P‚O‚O‚ÌŠÔ‚Å”š‚ğ—\‘z‚µ‚Ä‚­‚¾‚³‚¢ > " << flush;
		// ‰Šú‰»
		predictNum = 0;

		// “KØ‚È’l‚ğ“ü—Í‚·‚é‚Ü‚ÅŒp‘±
		while (predictNum < 1 || predictNum > 100)
		{			
			cin >> predictNum;
		}

		// ³‰ğ‚Ì‚Æ‚«
		if (predictNum == randNum) 
		{
			cout << "³‰ğI :)" << endl;
			return;
		}

		// •s³‰ğ
		cout << "‚à‚Á‚Æ" << ((predictNum > randNum) ? "‚¿‚¢‚³‚¢‚æ :<" : "‚¨‚¨‚«‚¢‚æ :>") << endl;
	}	
}
