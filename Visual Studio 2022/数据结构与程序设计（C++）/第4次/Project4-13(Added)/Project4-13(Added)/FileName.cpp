#include<iostream>
using namespace std;
void Ten_to_Sixteen(char c[]);
int Sixteen_to_Ten(char c[]);
void Ten_to_Eight(char c[]);
int Eight_to_Ten(char c[]);
int Char_to_Int(char c[]);
int main()
{
	cout << "请选择进制转换模式：";
	int a, b;
	cin >> a >> b;
	cout << "请输入要转换的数：";
	char c[10];
	cin.ignore(); // 清除输入缓冲区中的换行符
	cin.getline(c, 10);
	if (a == 10 && b == 16)
		Ten_to_Sixteen(c);
	if (a == 16 && b == 10)
		cout << Sixteen_to_Ten(c);
	if (a == 10 && b == 8)
		Ten_to_Eight(c);
	if (a == 8 && b == 10)
		cout << Eight_to_Ten(c);
}
int Char_to_Int(char c[])//将字符串转换成数字
{
	int cnt = 0, i = 0;
	while (c[i++] != '\0')
		cnt++;
	int a[10] = { 1 }, j, x = 0;
	for (i = 1; i < 10; i++)//用数组a储存10的幂次
	{
		a[i] = 1;
		for (j = 1; j <= i; j++)
			a[i] *= 10;
	}
	for (i = 0; c[i] != '\0'; i++)
		x += (c[i] - '0') * a[--cnt];
	return x;
}
void Ten_to_Sixteen(char c[])
{
	char a[10];
	int i = 0, j;
	int x = Char_to_Int(c);
	while (x != 0)
	{
		if (x % 16 < 10)
			a[i++] = x % 16 + '0';
		else
			a[i++] = x % 16 + 'A' - 10;
		x /= 16;
	}
	j = i;
	a[i] = '\0';
	for (i = j - 1; i >= 0; i--)//a中的字符串是倒序的
		cout << a[i];
}
int Sixteen_to_Ten(char c[])
{
	int cnt = 0, result = 0, i = 0;
	while (c[i++] != '\0')
		cnt++;
	int a[7] = { 1 }, j;
	for (i = 1; i < 7; i++)//用数组a储存16的幂次
	{
		a[i] = 1;
		for (j = 1; j <= i; j++)
			a[i] *= 16;
	}
	for (i = 0; c[i] != '\0'; i++)
	{
		if (c[i] <= '9' && c[i] >= '0')
			result += (c[i] - '0') * a[cnt - 1 - i];
		else if(c[i] < 'Z' && c[i] >= 'A')
			result += (c[i] - 'A' + 10) * a[cnt - 1 - i];
		else if (c[i] < 'z' && c[i] >= 'a')
			result += (c[i] - 'a' + 10) * a[cnt - 1 - i];
	}
	return result;
}
void Ten_to_Eight(char c[])
{
	int x = Char_to_Int(c);
	int a[10], i = 0;
	while (x != 0)
	{
		a[i++] = x % 8;
		x /= 8;
	}
	for (i -= 1; i >= 0; i--)
		cout << a[i];
}
int Eight_to_Ten(char c[])
{
	int x = Char_to_Int(c);
	int a[10] = { 1 }, i, j, result = 0;
	for (i = 1; i < 7; i++)
	{
		a[i] = 1;
		for (j = 1; j <= i; j++)
			a[i] *= 8;
	}
	i = 0;
	while (x != 0)
	{
		result += x % 10 * a[i++];
		x /= 10;
	}
	return result;
}
