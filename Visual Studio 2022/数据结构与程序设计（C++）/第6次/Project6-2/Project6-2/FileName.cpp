#include<iostream>
#include<cmath>
using namespace std;
struct Point {
	int x, y, z;
	float d;
};
void Calu(struct Point* b, int n);
void Sta(struct Point* b, int& n);
const int N = 5;
void main()
{
	struct Point b[N];
	int n = 0;
	for (int i = 0; i < N; i++)
	{
		cout << "请输入第" << i + 1 << "个点的坐标：";
		cin >> b[i].x >> b[i].y >> b[i].z;
	}
	Calu(b, N);
	Sta(b, n);
	cout << "与原点的距离超过10的点有" << n << "个。" << endl;
}
void Calu(struct Point* b, int n)
{
	for (int i = 0; i < n; i++)
		b[i].d = sqrt(b[i].x * b[i].x + b[i].y * b[i].y + b[i].z * b[i].z);
}
void Sta(struct Point* b, int& n)
{
	for (int i = 0; i < N; i++)
	{
		if (b[i].d > 10)
			n++;
	}
}