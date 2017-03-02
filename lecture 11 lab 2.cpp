#include<iostream>
using namespace std;
//cubic float of a function
float cubed(float input)
{
	float result;
	result = input*input*input;
	return result;
}
void main()
{
	cout << "please enter a number:" << endl;
	float a;
	cin >> a;
	cout << cubed(a);


}