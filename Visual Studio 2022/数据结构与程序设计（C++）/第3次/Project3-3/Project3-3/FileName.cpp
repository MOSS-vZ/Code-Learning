#include<iostream>
using namespace std;
int main()
{
	int a[3][3], i, j, sum1[3]={0}, sum2[3]={0}, cnt = 0;
	cout << "请输入9个正整数(1-9):";
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
			cin >> a[i][j];
	}
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
			sum1[i] += a[i][j];
		for (j = 0; j < 3; j++)
			sum2[i] += a[j][i];
	}
	for(i=0;i<3;i++)
	{
		if (sum1[i] == 6 && sum2[i] == 6)
			cnt++;
	}
	if (cnt == 3)
		cout << "是正确的简单数独";
	else
		cout << "不是正确的简单数独";
}