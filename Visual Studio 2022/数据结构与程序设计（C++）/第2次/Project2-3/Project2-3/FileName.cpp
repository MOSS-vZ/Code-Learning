#include<iostream>
using namespace std;
int main()
{
	int i, sum=0,b=0, a;
	float pass,ave;
	cout << "请输入学生的成绩：\n";
	for (i = 0;; i++)
	{
		cin >> a;
		if (a < 0 || a>100)
			break;
		sum += a;
		if (a >= 60)
			b++;
	}
	ave = sum * 1.0 / i;
	pass = b * 1.0 / i;
	cout << "平均分为" << ave<<"\n";
	cout << "总人数为" << i << "\n";
	cout << "及格率为" << pass*100 << "%";
}