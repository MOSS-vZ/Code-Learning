#include<iostream>
using namespace std;
int main()
{
	char c1[100] = "AxdvnvdjaxdwedaXDnvjksAXD";
	char c2[20];
	cin.getline(c2,20);
	int i, t = 'a' - 'A', cnt = 0, j, n;
	for (i = 0; c2[i] != '\0'; i++);
	n = i;
	for (i = 0; c1[i] != '\0'; i++)
	{
		int a[20], num = 0, s = 1;
		for (j = i; j < i + n; j++)
		{
			a[num] = ((c1[j] + t) == c2[num] || c1[j] == c2[num]);
			s *= a[num];
			num++;
		}
		if (s)
			cnt++;
	}
	cout << cnt;
}