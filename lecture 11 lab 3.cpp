#include<iostream>
using namespace std;
void prime(int input)
{
	float result;
	if (input % 2==0 || input % 3==0 )
	{
		cout << " not a prime number:" << endl;
	}
	else
	{
		cout << "number is prime:" << endl;
	}
}
void main()
{
	int i,j;
	cin >> i;
	prime(i)
}