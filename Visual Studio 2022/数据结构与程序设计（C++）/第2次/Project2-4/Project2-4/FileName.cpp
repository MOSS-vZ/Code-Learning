#include<iostream>
using namespace std;
int main()
{
	int a = 0,a1=0,i, m, d=0;
	double n = 0.01,b=0,b1=0;
	cin >> m;
	for (i = 1; i <= 30; i++)
	{
		a += m;
		b -= n;
		n *= 2;
	}
	n = 0.01;
	for (i = 1; i <= 30; i++)
	{
		a1 += m;
		b1 -= n;
		n *= 2;
		if (a1 + b1 <= 0)
		{
			d = i;
			break;
		}
	}
	cout << "富豪从第" << d << "天开始亏钱"<<endl;
	cout << "富豪亏了" << -b - a << "元。";
}