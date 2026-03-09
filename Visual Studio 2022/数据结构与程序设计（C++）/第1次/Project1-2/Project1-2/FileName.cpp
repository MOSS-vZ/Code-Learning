#include <iostream>a
using namespace std;
int main()
{
	int a, b, c,max=0;
	cin >> a >> b >> c;
	max = (a >= b ? (a >= c ? a : c ): (b >= c ? b : c));
	cout << max;
}