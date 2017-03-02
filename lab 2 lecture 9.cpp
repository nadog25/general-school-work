#include<iostream>
#include<time.h>
using namespace std;
//Write random numbers into a 10  * 10 array and print the out the array but keep the order on the screen!

void main()
{
	int r;
	int	arr[10][10];
	srand(time(NULL));

	for (int xx = 0; xx < 10; xx++) {
		for (int yy = 0; yy < 10; yy++) {
			arr[xx][yy] = rand() % 101;
		}
	}
	for (int ii = 0; ii < 10; ii++) {
		cout << endl;
		for (int jj = 0; jj < 10; jj++) {
			cout << arr[ii][jj] << " ";
		}
	}
}