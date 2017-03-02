#include<iostream>

using namespace std;

void main()
{
	for (;;)
	{
	bool hasa = false;
	bool hase = false;
	char name[100];
		cout << "please enter your name" << endl;
		cin >> name;
		for (int i = 0; name[i] != 0; i++)
		{
			if (name[i] == 'e')
				hase = true;

			if (name[i] == 'a')
				hasa = true;
		}
		if (hase == true)
			cout << "your name has an e" << endl;
		if (hasa == true)
			cout << "your name has an a" << endl;
		if (hasa == false && hase == false)
			cout << name;

	}
	



}