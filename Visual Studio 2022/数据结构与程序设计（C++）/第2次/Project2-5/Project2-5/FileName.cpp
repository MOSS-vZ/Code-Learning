#include<iostream>
using namespace std;
int main()
{
	int i;
	for (i = 1; i <= 200; i++)
	{
		int a = i / 100;
		int b = i % 100 / 10;
		int c = i % 10;
		if (i % 7 == 0)
			cout << i << ",";
		else if (a == 7 || b == 7 || c == 7)
			cout << i << ",";
	}
}