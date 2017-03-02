#include<iostream>
using namespace std;
void main()
{
	int i,num,found,temp, arr[10] = { 1,4,2,5,7,5,3,4,6,9 };
	num = 0, found = 0, temp = 0;
	for (i = 0; i < 10; i++)
		if (arr[i] == num)
		{
			found = 1;
		}
	if (found == 1)
	{
		arr[i] = 0;
		temp = arr[i + 1];
		arr[i + 1] = arr[i];
		arr[i] = temp;
	}


}