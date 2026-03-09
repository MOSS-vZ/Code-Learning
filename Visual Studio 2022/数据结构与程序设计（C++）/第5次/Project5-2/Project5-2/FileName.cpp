#include<iostream>
using namespace std;
void Sort(int* scoreary, int nLen);
void Statistic(int* scoreary, int nLen, int pa[]);
int main()
{
	int n, a[50] = { 0 }, i, b[3] = { 0 };
	do {
		cout << "请输入学生个数（小于50个）：";
		cin >> n;
	} while (n >= 50);
	cout << "请依次输入学生分数：";
	for (i = 0; i < n; i++)
		cin >> a[i];
	Sort(a, n);
	cout << "成绩从高到低排序为：";
	for (i = 0; i < n; i++)
		cout << a[i]<<" ";
	cout << endl;
	Statistic(a, n, b);
	cout << "分数在[85,100]的人数为：" << b[0] << endl;
	cout << "分数在[60,84]的人数为：" << b[1] << endl;
	cout << "分数在[0,59]的人数为：" << b[2] << endl;
}
void Sort(int* scoreary, int nLen)
{
	int i, j, t;
	for (i = 0; i < nLen - 1; i++)
	{
		for (j = 0; j < nLen - 1 - i; j++)
		{
			if (*(scoreary + j) < *(scoreary + j + 1))
			{
				t = *(scoreary + j);
				*(scoreary + j) = *(scoreary + j + 1);
				*(scoreary + j + 1) = t;
			}
		}
	}
}
void Statistic(int* scoreary, int nLen, int pa[])
{
	int i;
	for (i = 0; i < nLen; i++)
	{
		if (*(scoreary + i) >= 85 && *(scoreary + i) <= 100)
			pa[0]++;
		else if (*(scoreary + i) <= 84 && *(scoreary + i) >= 60)
			pa[1]++;
		else
			pa[2]++;
	}
}