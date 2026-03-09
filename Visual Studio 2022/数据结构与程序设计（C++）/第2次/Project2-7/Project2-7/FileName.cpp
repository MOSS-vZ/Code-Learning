#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	double x1=1,x2=2, a,t=0;
	cin >> a;
	while (abs(x1 - t) >= 1e-5)
	{
		x2 = (x1 + a / x1) / 2;
		t = x1;
		x1 = x2;
	}
	cout << a << "的平方根是" << x2;
}