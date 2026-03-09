#include<iostream>
using namespace std;
int main()
{
	double a, b;
	char c;
	cin >> a >> c >> b;
	if (c == '+')
		cout << a + b;
	else if (c == '-')
		cout << a - b;
	else if (c == '*')
		cout << a * b;
	else if (c == '/')
		if (b != 0)
			cout << a / b;
		else
			cout << "除数不能为零，错误";
	else
		if (a != (int)a || b != (int)b)
			cout << "浮点数不能进行取余运算，错误";
		else
			cout << (int)a % (int)b;
}