#include<iostream>
using namespace std;
void DeleStr(char* str1, char* str2);
void InverStr(char* str1, char* str2);
int SeleStr(char* str1, char* str2);
int main()
{
	char c[100], d[100], e[100], f[100];
	cin.getline(c, 100);
	DeleStr(c, d);
	InverStr(d, e);
	int n = SeleStr(e, f);
	cout << "最终结果字符串为" << f << endl << "字符个数为" << n;
}
void DeleStr(char* str1, char* str2)
{
	int i, j = 0;
	for (i = 0; *(str1 + i) != '\0'; i++)
	{
		int t = (*(str1 + i) >= 'a' && *(str1 + i) <= 'z') || (*(str1 + i) >= 'A' && *(str1 + i) <= 'Z');
		if (t)
			*(str2 + (j++)) = *(str1 + i);
	}
	*(str2 + j) = '\0';
}
void InverStr(char* str1, char* str2)
{
	int i = 0, n = 0;
	while (*(str1 + (i++)) != '\0')
		n++;
	for (i = 0; i < n ; i++)
		*(str2 + n - 1 - i) = *(str1 + i);
	*(str2 + n ) = '\0';
}
int SeleStr(char* str1, char* str2)
{
	int a, i = 0, j = 0;
	while (*(str1 + i) != '\0')
		i++;
	int n = i - 1;
	for (i = 0; i < n; i++)
	{
		a = str1[i];
		if (a % 2 == 0)
			*(str2 + (j++)) = *(str1 + i);
	}
	*(str2 + j) = '\0';
	return j ;
}