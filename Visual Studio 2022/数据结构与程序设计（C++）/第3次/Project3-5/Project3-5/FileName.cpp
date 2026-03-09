#include<iostream>
using namespace std;
int main()
{
	char a[10],b[10],i,j=0;
	cin.getline(a, 10);
	for (i = 0; a[i] != '\0'; i++)
	{
		if ((a[i] >='0' && a[i] <= '9') || (a[i] >= 'a' && a[i] <= 'z') || (a[i] >= 'A' && a[i] <= 'Z'))
			b[j++] = a[i];
	}
	b[j] = '\0';
	cout << b;
}