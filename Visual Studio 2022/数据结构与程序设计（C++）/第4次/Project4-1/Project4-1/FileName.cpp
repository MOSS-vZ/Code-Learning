#include<iostream>
using namespace std;
float f(float x);
float g(float x);
int main()
{
	float x;
	cin >> x;
	cout << f(g(x));
}
float f(float x)
{
	return (x + 1) * (x + 1);
}
float g(float x)
{
	return 2 * x + 1;
}