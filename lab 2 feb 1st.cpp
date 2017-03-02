#include <iostream>
#include <math.h>
using namespace std;
void main()
{
	float weight;
	float height;
	float bmi;
	cout << "please enter your weight in LB" << endl;
	cin >> weight;
	cout << "please enter your height in inches" << endl;
	cin >> height;
	bmi = (weight / (height * height)) * 703;
	cout << bmi << endl;
	if (bmi < 15)
	{
		cout << "very severly underweight" << endl;
	}

	if (bmi > 15 && bmi < 16)
	{
		cout << "severely underwight" << endl;
	}
	if (bmi > 16 && bmi < 18.5)
	{
		cout << "underweight" << endl;
	}
	if (bmi > 18.5 && bmi < 25)
	{
		cout << "normal(healthy weight)" << endl;
	}
	if (bmi > 25 && bmi < 30)
	{
		cout << "moderetly overweight" << endl;
	}
	if (bmi > 30 && bmi < 35)
	{
		cout << "moderetly obese" << endl;
	}
	if (bmi > 35 && bmi < 40)
	{
		cout << "severly obese" << endl;
	}
	if (bmi > 40)
	{
		cout << "very severely obese" << endl;
	}
}

	