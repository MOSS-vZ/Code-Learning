#include<iostream>
using namespace std;
void Prime(int x);
int cnt1 = 0;
int main()
{
	int i,a[10];
	for (i = 10; i < 20; i++)
		 Prime(i);
	cout << "已被调用了" << cnt1 << "次！";
}
void Prime(int x)
{
	int i;
	static int cnt2 = 0;
	cnt1++; 
	cnt2++;
	for (i = 2; i < x / 2; i++)
		if (x % i == 0)
			break;
	if (i >= x / 2)
		cout << x << "是质数" << endl;
	else
		cout << x << "不是质数" << endl;
	cout << "已被调用了" << cnt2 << "次！" << endl;
}