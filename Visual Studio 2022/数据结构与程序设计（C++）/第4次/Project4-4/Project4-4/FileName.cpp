#include<iostream>
using namespace std;
void change(int a[6],int x);
int main()
{
	int x, a[6] = { 0 },i;
	cin >> x;
	change(a, x);
	cout << x << "=";
	int sign = 1;
	for (i = 0; i < 6; i++)
	{
		if (a[i] != 0)
		{
			if (!sign) { cout << "+"; }
			if (i == 0) { cout << a[i] << "*100"; }
			if (i == 1) { cout << a[i] << "*50"; }
			if (i == 2) { cout << a[i] << "*10"; }
			if (i == 3) { cout << a[i] << "*5"; }
			if (i == 4) { cout << a[i] << "*2"; }
			if (i == 5) { cout << a[i] << "*1"; }
			sign = 0;
		}
	}
	cout << endl;
}
void change(int a[6], int x)
{
	int i, j, k, m, n, l,r;
	for (i = x / 100; i >= 0; i--)
	{
		for (j = x / 50; j >= 0; j--)
		{
			for (k = x / 10; k >= 0; k--)
			{
				for (m = x / 5; m >= 0; m--)
				{
					for (n = x / 2; n >= 0; n--)
					{
						for (l = x; l >= 0; l--)
						{
							r = 100 * i + 50 * j + 10 * k + 5 * m + 2 * n + l;
							if (x == r)
							{
								a[0] = i;
								a[1] = j;
								a[2] = k;
								a[3] = m;
								a[4] = n;
								a[5] = l;
								return;
							}
						}
					}
				}
			}
		}
	}
}