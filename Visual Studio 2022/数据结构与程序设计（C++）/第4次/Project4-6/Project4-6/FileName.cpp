#include<iostream>
using namespace std;
const int N = 12;
void Jiemi(char input[N], char output[N]);
int main()
{
	char in[N],out[N];
	cin.getline(in, N);
	Jiemi(in, out);
	cout << out;
}
void Jiemi(char input[N], char output[N])
{
	int a[N-1], b[N-1], i, t, j;
	for (i = 0; i < N - 1; i++)
		a[i] = input[i] - '0';
	for (i = 0; i < (N - 1) / 2; i++)
	{
		t = a[i];
		a[i] = a[N - 2 - i];
		a[N - 2 - i] = t;
	}
	for (i = 0; i < N - 4; i++)
		b[i] = a[i + 3];
	for (i = N - 4; i < N - 1; i++)
		b[i] = a[i - (N - 4)];
	for (i = 0; i < N - 1; i++)
	{
		if (b[i] < 5)
			b[i] += 5;
		else
			b[i] -= 5;
		output[i] = b[i] + '0';
	}
	output[N - 1] = '\0';
}