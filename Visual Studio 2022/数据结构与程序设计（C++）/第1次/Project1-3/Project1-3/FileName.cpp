#include <iostream>
using namespace std;
int main()
{
	int a1, b, c, d,a2;
	cin >> a1;
	b = a1 % 10;
	c = (a1/10) % 10;
	d = a1 / 100;
	a2 = b * 100 + c * 10 + d;
	cout << a2;
}