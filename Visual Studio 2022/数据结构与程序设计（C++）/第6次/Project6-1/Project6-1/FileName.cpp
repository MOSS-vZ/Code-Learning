#include<iostream>
using namespace std;
struct Fraction {
	int numerator, denominator;
};
void add(struct Fraction a, struct Fraction b);
void multiple(struct Fraction a, struct Fraction b);
void main()
{
	struct Fraction a, b;
	int n1, n2, d1, d2;
	cout << "请输入第一个分数的分子和分母：";
	cin >> n1 >> d1;
	cout << "请输入第二个分数的分子和分母：";
	cin >> n2 >> d2;
	a.numerator = n1;
	a.denominator = d1;
	b.numerator = n2;
	b.denominator = d2;
	add(a, b);
	multiple(a, b);
}
void add(struct Fraction a, struct Fraction b)
{
	int n1 = a.numerator;
	int n2 = b.numerator;
	int d1 = a.denominator;
	int d2 = b.denominator;
	int n = n1 * d2 + n2 * d1;
	int d = d1 * d2;
	for (int i = n;; i--)
	{
		if (n % i == 0 && d % i == 0)
		{
			n /= i;
			d /= i;
			break;
		}
	}
	if (d != 1)
		cout << "相加的结果为" << n << "/" << d << endl;
	else
		cout << "相加的结果为" << n << endl;
}
void multiple(struct Fraction a, struct Fraction b)
{
	int n1 = a.numerator;
	int n2 = b.numerator;
	int d1 = a.denominator;
	int d2 = b.denominator;
	int n = n1 * n2;
	int d = d1 * d2;
	for (int i = n;; i--)
	{
		if (n % i == 0 && d % i == 0)
		{
			n /= i;
			d /= i;
			break;
		}
	}
	if (d != 1)
		cout << "相乘的结果为" << n << "/" << d << endl;
	else
		cout << "相乘的结果为" << n << endl;
}