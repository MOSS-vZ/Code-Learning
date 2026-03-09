#include<iostream>
using namespace std;
int max1(int* p);
int j;
int main()
{
	int a[8] = { 5,74,6,2,46,13,57,29 }, i, max = 0, maxi;
	for (i = 0; i < 8; i++)
	{
		if (a[i] > max)
		{
			max = a[i];
			maxi = i;
		}
	}
	cout << "最大的数为" << max << "，序号为" << maxi + 1 << endl;
	int* p = a;
	max = max1(p);
	cout << "最大的数为" << max << "，序号为" << j;
}
int max1(int* p)
{
	static int m = 0;
	static int* q = p;
	if (p - q < 8)
	{
		if (*p > m)
		{
			m = *p;
			j = p - q + 1;
		}
		max1(++p);
	}
	return m;
}