#include<iostream>
using namespace std;
int main()
{
	for (int a = 100000; a <= 999999; a++) {
		int c = 0;
		int d = 0;
		int b = a;
		while (b > 0) {
			c = b % 10;
			b /= 10;
			d = d * 10 + c;
		}
		for (int i = 2; i <= 9; i++) {
			int m = a * i;
			if (m == d) {
				cout<< a<<endl;
			}
		}
	}
}