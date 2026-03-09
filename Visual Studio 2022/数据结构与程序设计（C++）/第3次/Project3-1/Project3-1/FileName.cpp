#include<iostream>
using namespace std;
int main()
{
	float a[10], sum1 = 0, sum2 = 0, sum = 0, ave1, ave2, ave;
	int i;
	for (i = 0; i < 10; i++)
		cin >> a[i];
	for (i = 0; i < 10; i++)
	{
		sum += a[i];
		if (a[i] > 90)
			sum1 ++;
	}
	ave = sum / 10;
	for (i = 0; i < 10; i++)
	{
		if (a[i] < ave)
			sum2 ++;
	}
	ave1 = sum1 / 10 * 100;
	ave2 = sum2 / 10 * 100;
	cout << "90分以上学生的百分比为" << ave1 << "%" << endl;
	cout << "低于平均分的学生的百分比为" << ave2 << "%" << endl;
}