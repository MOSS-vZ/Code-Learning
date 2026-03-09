#include<iostream>
using namespace std;
int main()
{
	char a[60],b[60];
	int i,j=0,x;
	cin.getline(a, 60);
	i = 0;
	while (a[i] != '\0')
	{
	
		if (a[i] >= '0' && a[i] <= '9')
		{
			if (a[i + 2] == '#')
			{
				x = (a[i]+1-'1') * 10 + (a[i + 1] + 1 - '1');
				b[j++] = x-1+'1' + 48;
				i += 3;
			}
			else
				b[j++] = a[i++] + 48;
		}
	}
	b[j] = '\0';
	cout << b;
}