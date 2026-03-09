#include<iostream>
using namespace std;
int main()
{
	int a[7], b[7] = { 0 };
	int i,j=0,k=0;
	for (i = 0; i < 7; i++)
		cin >> a[i];
	for (i = 0; i < 7; i++)
	{
			for (j = i + 1; j < 7; j++)
			{
				if (a[i] == a[j])
				{
					b[i]++;
					b[j]++;
				}
			}
	}
	for (i = 0; i < 7; i++)
	{
		for (j = i + 1; j < 7;j++)
		{
			if (a[i] == a[j] )
				b[i] = 1;
		}
	}
	for (i = 0; i < 7; i++)
	{
		if (b[i] % 2 == 0)
			cout << "漏掉的筷子长度为" << a[i]<<endl;
	}
}