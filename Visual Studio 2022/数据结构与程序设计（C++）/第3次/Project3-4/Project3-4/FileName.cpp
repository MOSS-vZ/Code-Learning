#include<iostream>
using namespace std;
int main()
{
	float a[2][2], b[2][2];
	int i, j;
	for (i = 0; i < 2; i++)
		for (j = 0; j < 2; j++)
			cin >> a[i][j];
	float del = a[1][1] * a[0][0] - a[1][0] * a[0][1];
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 2; j++)
		{
			if ((i + j) % 2 == 0)
				b[i][j] = a[1 - i][1 - j];
			else
				b[i][j] = -a[i][j];
		}
	}
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 2; j++)
			cout << b[i][j] / del << "\t";
		cout << endl;
	}
}