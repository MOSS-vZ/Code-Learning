#include<iostream>
using namespace std;
int main()
{
	int a[11], b[11],i,j,t;
	float sum=0;
	a[10] = 0;
	for (i = 0; i < 10; )
	{
		cout << "请第"<<i+1<<"位评委输入分数（80-100）：";
		cin >> a[i];
		if (a[i] < 80 || a[i]>100)
		{
			cout << "输入不合理，请重新输入"<<endl;
			continue;
		}
		i++;
	}
	for (i = 0; i < 9; i++)
	{
		for (j = 0; j < 9 - i; j++)
		{
			if (a[j] < a[j + 1])
			{
				t = a[j];
				a[j] = a[j + 1];
				a[j + 1] = t;
			}
		}
	}
	for (i = 0; i < 9; i++)
		cout << a[i] << " ";
	cout << a[9]<<endl;
	cout << "请第11位评委输入分数:";
	cin >> t;
	for (i = 0; i < 11; i++)
	{
		if (a[i] > t && t != 0)
			b[i] = a[i];
		else if (t != 0)
		{
			b[i] = t;
			t = 0;
		}
		else
			b[i] = a[i - 1];
	}
	for (i = 0; i < 11; i++)
	{
		sum += b[i];
		if (i == 10)
			cout << b[i] << endl;
		else
			cout << b[i] << " ";
	}
	cout << "11位评委的平均分是" << sum / 11 << endl;
}