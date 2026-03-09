#include<iostream>
using namespace std;
int main()
{
	int a[8],i,b[8],t;
	long int x;
	cin >> x;
	for (i = 7; i >= 0; i--)
	{
		a[i] = (x % 10 + 5) % 10;
		x /= 10;
	}
	for (i = 0; i < 5; i++)
		b[i + 3] = a[i];
	for (i = 5; i < 8; i++)
		b[i - 5] = a[i];
	for (i = 0; i < 4; i++)
	{
		t = b[i];
		b[i] = b[7 - i];
		b[7 - i] = t;
	}
	for (i = 0; i < 8; i++)
		cout << b[i];
}