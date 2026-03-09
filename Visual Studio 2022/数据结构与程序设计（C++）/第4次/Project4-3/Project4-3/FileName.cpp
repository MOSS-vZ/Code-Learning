#include<iostream>
using namespace std;
void Sort(float a[], int n);
float Ave(float a[], int n);
int main()
{
	float a[12] = { 0 };
	int i = 0;
	while (i < 10)
	{
		cout << "请第" << i + 1 << "位评委打分（0-10）：";
		cin >> a[i];
		if (a[i] < 0 || a[i]>10)
		{
			cout << "打分有误，请重打\n";
			continue;
		}
		i++;
	}
	Sort(a, 10);
	cout << "平均分为" << Ave(a, 10) << endl;
	for (i = 0; i < 10; i++)
		cout << a[i] << " ";
	cout << endl;
	i = 10;
	while (i > 9 && i < 12)
	{
		cout << "请第" << i+1 << "位评委打分（0-10）：";
		cin >> a[i];
		if (a[i] < 0 || a[i]>10)
		{
			cout << "打分有误，请重打\n";
			continue;
		}
		i++;
	}
	Sort(a, 12);
	cout << "平均分为" << Ave(a, 12) << endl;
	for (i = 0; i < 12; i++)
		cout << a[i] << " ";
}
void Sort(float a[], int n)
{
	int i, j;
	float t;
	for (i = 0; i < n-1; i++)
	{
		for (j = 0; j < n - 1 - i; j++)
		{
			if (a[j] < a[j + 1])
			{
				t = a[j];
				a[j] = a[j + 1];
				a[j + 1] = t;
			}
		}
	}
}
float Ave(float a[], int n)
{
	int i;
	float ave, sum = 0;
	for (i = 1; i < n-1; i++)
			sum += a[i];
	ave = sum / (n - 2);
	return ave;
}