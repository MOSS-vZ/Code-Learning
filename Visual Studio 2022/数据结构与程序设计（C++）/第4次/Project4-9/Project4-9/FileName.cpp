#include<iostream>
using namespace std;
int Int_to_Char(int x, char c[],int n);
int main()
{
	int x, cnt = 0;
	cin >> x;
	int i, y = x;
	while (y != 0)
	{
		cnt++;
		y /= 10;
	}
	char c[10],d[10];
	Int_to_Char(x, c, 0);
	cout << c << endl;
	d[cnt] = '\0';
	for (i = cnt-1; i >= 0; i--)
	{
		d[i] = x % 10 + '0';
		x /= 10;
	}
	cout << d;
}
int Int_to_Char(int x, char c[],int n)
{
	if (x / 10 != 0)
		n = Int_to_Char(x / 10, c, n);
	c[n++] = x % 10 + '0';
	c[n] = '\0';
	return n;
}