#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	double a, b, angle;
	a = 1 * 3 + 2 * 6 + 3 * 4;//计算向量a,b的数量积
	b = sqrt(1.0 * 1 + 2 * 2 + 3 * 3) * sqrt(3.0 * 3 + 6 * 6 + 4 * 4);//计算a,b模的乘积
	angle = acos(a / b)*180/3.14;//acos()函数是上网查的
	cout << angle << "°";
}