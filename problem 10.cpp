#include<iostream>
using namespace std;
#include<time.h>
void main()
{
	int i,g;
	srand(time(NULL));
		i = rand() % 10 + 4;
		cout << i << endl;
		cin >> g;
		if (g = i)
		{
			cout << "win";
		}
		

}