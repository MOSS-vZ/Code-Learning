#include<iostream>
using namespace std;
void Merge(int a[], int m, int b[], int n, int c[]);
void Sort(int a[], int n);
int main()
{
	int i, a[5], b[5], c[10];
	cout << "请输入数组a：";
	for (i = 0; i < 5; i++)
		cin >> a[i];
	cout << "请输入数组b：";
	for (i = 0; i < 5; i++)
		cin >> b[i];
	Merge(a, 5, b, 5, c);
	for (i = 0; i < 9; i++)
		cout << c[i] << " ";
	cout << c[i];
}
void Merge(int a[], int m, int b[], int n, int c[])
{
	int i;
	for (i = 0; i < 10; i++)
	{
		if (i < 5)
			c[i] = a[i];
		else
			c[i] = b[i - 5];
	}
	Sort(c, 10);
}
void Sort(int a[], int n)
{
	int i, j, t;
	for (i = 0; i < n - 1; i++)
	{
		for (j = 0; j < n - 1 - i; j++)
		{
			if (a[j] > a[j + 1])
			{
				t = a[j];
				a[j] = a[j + 1];
				a[j + 1] = t;
			}
		}
	}
}