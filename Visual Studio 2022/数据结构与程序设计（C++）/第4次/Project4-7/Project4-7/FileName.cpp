#include<iostream>
using namespace std;
const int N = 15;
void AveFilter(float a[], int n);
void MedFilter(float a[], int n);
float mid(float a, float b, float c);
int main()
{
	float a[N], b[N], c[N];
	int i;
	for (i = 0; i < N ; i++)
	{
		cin >> a[i];
		b[i] = c[i] = a[i];
	}
	AveFilter(b, N);
	MedFilter(c, N);
	for (i = 0; i < N - 1; i++)
		cout << b[i] << " ";
	cout << b[i] << endl;
	for (i = 0; i < N - 1; i++)
		cout << c[i] << " ";
	cout << c[i] << endl;
}
void AveFilter(float a[], int n)
{
	float b[N];
	int i;
	for (i = 0; i < n; i++)
		b[i] = a[i];
	for (i = 1; i < n-1; i++)
		a[i] = (b[i - 1] + b[i] + b[i + 1]) / 3;
}
void MedFilter(float a[], int n)
{
	float b[N];
	int i;
	for (i = 0; i < n; i++)
		b[i] = a[i];
	for (i = 1; i < n - 1; i++)
		a[i] = mid(b[i - 1], b[i], b[i + 1]);
}
float mid(float a, float b, float c)
{
	float t;
	if (a > b) { t = a; a = b; b = t; }
	if (a > c) { t = a; a = c; c = t; }
	if (b > c) { t = b; b = c; c = t; }
	return b;
}