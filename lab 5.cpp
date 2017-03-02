#include<iostream>
#include<Windows.h>
using namespace std;

void main()

{
	cout << "what factorial do you need?" << endl;
	int a, b;
	cin >> b;
	a = 1;
	for (int i = 1; i <= b; i++) {
		a = a*i;
	}
	cout << a << endl;

	system("pause");
}