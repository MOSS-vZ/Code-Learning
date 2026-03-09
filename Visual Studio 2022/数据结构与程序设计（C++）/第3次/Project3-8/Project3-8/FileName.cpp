#include<iostream>
using namespace std;
int main()
{
	int a[3][3], i, j, b[8],t,x=0;
	for (i = 0; i < 3; i++)
		for (j = 0; j < 3; j++)
			cin >> a[i][j];
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			if (a[i][j] < a[1][1])
				a[i][j] = 0;
			else
				a[i][j] = 1;
		}
	}
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			if (i < 1 )
				b[i * 3 + j] = a[i][j];
			else if (i == 1 && j == 2)
				b[i + j] = a[i][j];
			else if (i > 1)
				b[i * 3 + j - 2] = a[i][2 - j];
			else if (i == 1 && j == 0)
				b[7] = a[i][j];
		}
	}
	for (i = 0; i < 8; i++)
	{
		t = 1;
		for (j = 0; j < 7-i; j++)
			t *= 2;
		x += t * b[i];
	}
	cout << x;
}