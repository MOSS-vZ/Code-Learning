#include<iostream>
using namespace std;
int IntToStr(int n, char str[]);
int differ(char str1[], char str2[]);
int main()
{
	int m1, m2, a, b;
	cin >> m1 >> m2;
	char c1[10], c2[10];
	do {
		a = IntToStr(m1, c1);
		b = IntToStr(m2, c2);
		if (a != b) {
			cout << "位数不相等，重输！" << endl;
			cin >> m1 >> m2;
		}
	} while (a != b);
	cout << "汉明距离为" << differ(c1, c2);
}
int IntToStr(int n, char str[])
{
	int cnt = 0, m = n, i;
	while (m != 0)
	{
		cnt++;
		m /= 10;
	}
	for (i = cnt - 1; i >= 0; i--)
	{
		str[i] = n % 10 + '0';
		n /= 10;
	}
	str[cnt] = '\0';
	return cnt;
}
int differ(char str1[], char str2[])
{
	int cnt = 0,i;
	for (i = 0; str1[i] != '\0'; i++)
	{
		if (str1[i] != str2[i])
			cnt++;
	}
	return cnt;
}