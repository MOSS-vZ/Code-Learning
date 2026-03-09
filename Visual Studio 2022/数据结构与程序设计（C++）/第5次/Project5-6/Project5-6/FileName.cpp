#include<iostream>
using namespace std;
void Merge(int* a, int m, int* b, int n, int* c);
void Sort(int* a,int n);
int main()
{
	int a[100] = { 0 }, b[100] = { 0 }, c[200];
	int i, m, n;
	cout << "请输入两个数组的长度：";
	cin >> m >> n;
	cout << "请输入数组：";
	for (i = 0; i < m; i++)
		cin >> a[i];
	for (i = 0; i < n; i++)
		cin >> b[i];
	Merge(a, m, b, n, c);
	for (i = 0; i < m+n; i++)
		cout << c[i];
}
void Merge(int* a, int m, int* b, int n, int* c)
{
	int i;
	for (i = 0; i < m; i++)
		*(c + i) = *(a + i);
	for (; i - m < n; i++)
		*(c + i) = *(b + i - m);
	Sort(c,m+n);
}
void Sort(int* a, int n)
{
	int i, j, t;
	for (i = 0; i < n - 1; i++)
	{
		for (j = 0; j < n - 1 - i; j++)
		{
			if (*(a + j) > *(a + j + 1))
			{
				t = *(a + j);
				*(a + j) = *(a + j + 1);
				*(a + j + 1) = t;
			}
		}
	}
}