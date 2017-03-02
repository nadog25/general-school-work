#include<iostream>
using namespace std;

void main ()
//float incase they use decimals
// cout << cin >> 
// remember to assign variable for outcome
{
	int  v;
	float length;
	float height;
	float width;
	cout << "please enter a  length" << endl;
	cin >> length;
	cout << "please enter a width" << endl;
	cin >> height;
	cout << "please enter a height" << endl;
	cin >> width;
	v = length*width*height;
	cout << "the volume of this rectangle is" << v << endl;

}