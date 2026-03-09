#include<iostream>
using namespace std;
int Is_parallel(float* L1, float* L2);
int main()
{
	float L1[3], L2[3];
	int i, t;
	cout << "请输入直线L1的三个参数：";
	for (i = 0; i < 3; i++)
		cin >> L1[i];
	cout << "请输入直线L2的三个参数：";
	for (i = 0; i < 3; i++)
		cin >> L2[i];
	t = Is_parallel(L1, L2);
	if (t == 1)
		cout << "两直线平行";
	else if (t == 2)
		cout << "两直线重合";
	else
		cout << "两直线不平行";
}
int Is_parallel(float* L1, float* L2)
{
	float t = *(L1) * *(L2 + 1) - *(L1 + 1) * *(L2);
	if (t == 0)
	{
		if (*(L1 + 2) / *(L1) == *(L2 + 2) / *(L2))
			return 2;
		else
			return 1;
	}
	else
		return 0;
}