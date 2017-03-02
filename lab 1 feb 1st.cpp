#include <iostream>
#include <math.h>
using namespace std;
void main()
{
	cout << "enter the height in feet to calculate velocity" << endl;
	int h, g, v;
	 g = 32.2;
	cin >> h;
	cout << "at this height" << h << endl;
	float height, gravity;
	v = sqrt(2 * h*g);
	cout << v << "ft/s" << endl;
	if (v > 118)
	{
		cout << "danger" << endl;
	}



}
