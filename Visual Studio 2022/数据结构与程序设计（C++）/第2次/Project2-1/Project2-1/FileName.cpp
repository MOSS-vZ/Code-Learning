#include<iostream>
using namespace std;
int main()
{
	float x,f;
	cin >> x;
	if (x >= 0)
		f = (x - 2) * (x - 2) - 7;
	else
		f = 4 * x - 3;
	cout << f;
}