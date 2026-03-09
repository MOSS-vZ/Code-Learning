#include<iostream>
using namespace std;
const int N = 5;
int product(int a[], int n);
int main()
{
	int a[N] = { 2,4,3,7,5 },i,t=1;
	cout << product(a, N) << endl;
	for (i = 0; i < N; i++)
	{
		t *= a[i];
	}
	cout << t;
}
int product(int a[], int n)
{
	if (n == 1)
		return a[0];
	else
		return a[n - 1] * product(a, n-1);
}