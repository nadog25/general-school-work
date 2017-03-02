#include<iostream>
#include<time.h>
using namespace std;

void main()
{
	int sum[1001], r, a;
	a = 0;
	srand(time(NULL));

	for (int ii=0; ii < 1001; ii++) {

		r = rand() % 1001;
		sum[ii] = r;
		a += sum[ii];
	}
	cout << a << endl;

		


	


}