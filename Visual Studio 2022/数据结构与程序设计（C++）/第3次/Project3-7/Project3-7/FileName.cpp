#include<iostream>
using namespace std;
float mid(float a, float b, float c);
int main()
{
	float a[15], b[15], c[15];
	int i;
	for (i = 0; i < 15; i++)
		cin >> a[i];
	b[0] = c[0] = a[0];
	b[14] = c[14] = a[14];
	for (i = 1; i < 14; i++)
	{
		b[i] = (a[i - 1] + a[i] + a[i + 1])/3;
		c[i] = mid(a[i - 1], a[i], a[i + 1]);
	}
	cout << "平滑滤波的结果是：";
	for (i = 0; i < 14; i++)
		cout << b[i]<<" ";
	cout << b[i] << endl;
	cout << "中值滤波的结果是：";
	for (i = 0; i < 14; i++)
		cout << c[i]<<" ";
	cout << c[i] << endl;
}
float mid(float a, float b, float c)
{
	float t;
	if (a > b) { t = b; b = a; a = t; };
	if (a > c) { t = c; c = a; a = t; };
	if (b > c) { t = b; b = c; c = t; };
	return b;
}