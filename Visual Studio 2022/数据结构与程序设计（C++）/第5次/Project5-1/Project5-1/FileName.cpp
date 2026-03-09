#include<iostream>
using namespace std;
void inv(int* x, int n);
int main()
{
	int a[10] = { 1,2,3,4,5,6,7,8,9,10 }, i;
	inv(a, 10);//函数功能正常
	for (i = 0; i < 9; i++)
		cout << a[i] << " ";
	cout << a[i];
}
void inv(int* x, int n)
{
	int* p, temp, * i, * j;
	i = x;
	j = x + n - 1;
	p = x + (n - 1) / 2;//i=0x00000054c1aff808,j=0x00000054c1aff82c,p=0x00000054c1aff818
	//j=i+9*4=p+5*4
	for (; i <= p; i++, j--) /* 调试时在该语句前设置断点 */
	{
		temp = *i; 
		*i = *j;
		*j = temp;
	}
}
