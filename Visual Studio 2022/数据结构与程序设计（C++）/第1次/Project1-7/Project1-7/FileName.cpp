#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	float a, b, c;
	double x1, x2, delta;
	cin >> a >> b >> c;
    if (a == 1) 
    {
        cout << "x*x";
    }
    else if (a == -1) {
        cout << "-x*x";
    }
    else {
        cout << a << "x*x";
    }
    if (b != 0) {
        if (b > 0 ) cout << "+";
        if (b < 0) cout << "-";
        if (abs(b) != 1) cout << abs(b);
        cout << "x";
    }
    if (c != 0) {
        if (c > 0 && (a != 0 || b != 0)) cout << "+";
        if (c < 0) cout << "-";
        cout << abs(c);
    }
    cout << " = 0" << endl;//为了输出形式的美观，要判断各系数的正负，篇幅较长
	delta = b * b - 4 * a * c;
	if (delta > 0)
	{
		x1 = (-b - sqrt(delta)) / (2 * a);
		x2 = (-b + sqrt(delta)) / (2 * a);
		cout << "x1=" << x1 << endl << "x2=" << x2 << endl;//考虑到有复数解的时候输出不便，所以分开输出
	}
	else if (delta == 0)
	{
		x1 = x2 = (-b - sqrt(delta)) / (2 * a);
		cout << "x1=x2=" << x1 << endl;
	}
	else
	{
		cout << "x1=" << -b / (2 * a) << "-" << sqrt(-delta) / (2 * a) << "i" << endl
			 << "x2=" << -b / (2 * a) << "-" << sqrt(-delta) / (2 * a) << "i" << endl;
	}
}