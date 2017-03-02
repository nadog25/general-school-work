#include <iostream>
using namespace std;

void main()
{
	float pennies;
	float nickels;
	float dimes;
	float quarters;

	int B1;
	int B5;
	int B10;
	int B20;
	int B50;
	int B100;
	pennies = 0;
	nickels = 0;
	dimes = 0;
	quarters = 0;
	B1 = 0;
	B5 = 0;
	B10 = 0;
	B20 = 0;
	B50 = 0;
	B100 = 0;
	cout << "whats in your wallet?" << endl;
	cout << "please enter amount of pennies" << endl;
	cin >> pennies;
	cout << "please enter amount of nickels" << endl;
	cin >> nickels;
	nickels = nickels * 5;
	cout << "please enter the amount of dimes" << endl;
	cin >> dimes;
	dimes = dimes * 10;
	cout << "please enter the amount of quarters" << endl;
	cin >> quarters;
	quarters = quarters * 25;
	cout << "please enter the amount of 1 dollar bills" << endl;
	cin >> B1;
	B1 = B1 * 1;
	cout << "please enter the amouth of 5 dollar bills" << endl;
	cin >> B5;
	B5 = B5 * 5;
	cout << "please enter the amount of 10 dollar bills" << endl;
	cin >> B10;
	B10 = B10 * 10;
	cout << "please enter the amount of 20 dollar bills" << endl;
	cin >> B20;
	B20 = B20 * 20;
	cout << "please enter the amount of 50 dollar bills" << endl;
	cin >> B50;
	B50 = B50 * 50;
	cout << "please enter the amount of 100 dollar bills" << endl;
	cin >> B100;
	B100 = B100 * 100;

	cout << pennies + nickels + dimes + quarters << endl;
}