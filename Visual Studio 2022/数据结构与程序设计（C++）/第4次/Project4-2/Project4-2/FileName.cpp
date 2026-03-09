#include<iostream>
using namespace std;
void Draw(int n);
int main()
{
	int n;
	cin >> n;
	Draw(n);
}
void Draw(int n)
{
	int i,j;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			if (i == 0 || i == n - 1)
			{
				if (j != n - 1)
					cout << "* ";
				else
					cout << "*" << endl;
			}
			else
			{
				if (j == 0)
					cout << "* ";
				else if (j==n-1)
					cout << "*" << endl;
				else
					cout << "  ";
			}
		}
	}
}