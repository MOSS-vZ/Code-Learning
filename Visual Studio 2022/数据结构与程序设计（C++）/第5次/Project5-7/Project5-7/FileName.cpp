#include<iostream>
using namespace std;
void Average(int a[][4], float* ave);
void Max(int a[][4], int* max);
int max_(int a, int b, int c);
int main()
{
	int a[3][4], i, j,max[4] = { 0 };
	float ave[4] = { 0 };
	cout << "请输入成绩：" << endl;
	for (i = 0; i < 3; i++)
		for (j = 0; j < 4; j++)
			cin >> a[i][j];
	Average(a, ave);
	Max(a, max);
	cout << "四门课的平均分为：";
	for (i = 0; i < 4; i++)
		cout << *(ave + i) << " " ;
	cout << endl;
	cout << "四门课的各自的最高分为：";
	for (i = 0; i < 4; i++)
		cout << *(max + i) << " ";
	cout << endl;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 4; j++)
		{
			cout << *(a + i) + j << " ";
		}
		cout << endl;
	}
}
void Average(int a[][4], float* ave)
{
	int i, j;
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 3; j++)
			*(ave + i) += *(a[j] + i);
		*(ave + i) /= 3;
	}
}
void Max(int a[][4], int* max)
{
	int i, j;
	for (i = 0; i < 4; i++)
		*(max + i) = max_(*(a[0] + i), *(a[1] + i), *(a[2] + i));
}
int max_(int a, int b, int c)
{
	int t;
	if (a > b) { t = a, a = b, b = t; }
	if (a > c) { t = a, a = c, c = t; }
	if (c > b) { t = c, c = b, b = t; }
	return b;
}