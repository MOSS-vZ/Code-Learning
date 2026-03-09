#include<iostream>
#include<cmath>
using namespace std;
int Check(int number);
int Prime(int number);
int main()
{
	int x;
	cin >> x;
	int check=Check(x);
	if (check)
		cout << "该整数能表示成两个质数之和。";
	else
		cout << "该整数不能表示成两个质数之和。";
}
int Check(int number) 
{
	int i;
	for (i = 1; i <= number / 2; i++)
	{
		if (Prime(i) && Prime(number - i))
			return 1;
		else
			return 0;
	}
}
int Prime(int number)
{
	int i;
	for (i = 2; i < sqrt(number); i++)
	{
		if (number % i == 0)
			break;
	}
	if (i >= sqrt(number))
		return 1;
	else
		return 0;
}