#include<iostream>
using namespace std;
int main()
{
	const int x1=2,x2=3,x3=4;
	int y,a, b, c,i,j,count1,count2;
	cin >> y;
	while (y!=(x1*100+x2*10+x3))
	{
		count1 = 0;
		count2 = 0;
		a = y / 100;
		b = (y % 100) / 10;
		c = y % 10;
		int n1[3] = { x1,x2,x3 };
		int n2[3] = { a,b,c };
		for (i = 0; i < 3;i++)
		{
			for (j = 0; j < 3; j++)
			{
				if (n1[i] == n2[j])
				{
					count1++;
					if (i == j)
						count2++;
				}
			}
		}
		cout << count1 << "个数正确，" << count2 << "个位置正确。\n";
		cin >> y;
	}
	cout << "3个数正确，3个位置正确。\n";
}