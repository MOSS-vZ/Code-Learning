#include<iostream>
#include<random>
using namespace std;
void number(char c[15]);
int main()
{
	char guess[15], result[15];
	int i;
	number(result);//给一串中奖号码
	cout << "请输入猜测的投注数字：";
	cin.getline(guess, 15);
	int j = 0, l = 1; 
	int k=0;
	for (i = 0; i < 14; i+=2)//统计相同的号码数
	{
		if ((guess[i] == result[i]) && (guess[i + 1] == result[i + 1]))
			j++;
	}
	if (j == 7)
		cout << "一等奖！";
	else if (j == 6 && ((guess[i - 2] != result[i - 2]) && (guess[i - 1] != result[i - 1])))
		cout << "二等奖！";
	else if (j == 6 && ((guess[i - 2] == result[i - 2]) && (guess[i - 1] == result[i - 1])))
		cout << "三等奖！";
	else if (j == 5)
		cout << "四等奖！";
	else if (j == 4)
		cout << "五等奖！";
	else if ((guess[i - 2] == result[i-2]) && (guess[i - 1] == result[i - 1]))
		cout << "六等奖！";
	else
		cout << "很遗憾，未中奖";
	cout << endl << "中奖号码为" << result << endl;
	char rdm[15];
	while (l)//计算随机生成出中奖号码的次数
	{
		int cnt = 0;
		number(rdm);
		for (i = 0; i < 14; i++)
		{
			if (rdm[i] == result[i])
				cnt++;
		}
		k++;
		if (cnt == 14)
			l = 0;
	}
	cout << "产生了" << k << "注后中了一等奖";
}
void number(char c[15])
{
	random_device rd;
	mt19937 gen(rd());
	uniform_int_distribution<> dis1(1, 33);
	uniform_int_distribution<> dis2(1, 15);
	int a[6], b[1], i;
	for (i = 0; i < 6; i++)
		a[i] = dis1(gen);
	b[0] = dis2(gen);
	for (i = 0; i < 14; i += 2)
	{
		if (i < 12)
		{
			if (a[i / 2] < 10)
			{
				c[i] = '0';
				c[i + 1] = a[i / 2] - 1 + '1';
			}
			else
			{
				c[i] = a[i / 2] / 10 - 1 + '1';
				c[i + 1] = a[i / 2] % 10 - 1 + '1';
			}
		}
		else
		{
			if (b[i - 12] < 10)
			{
				c[i] = '0';
				c[i + 1] = b[i - 12] - 1 + '1';
			}
			else
			{
				c[i] = b[i - 12] / 10 - 1 + '1';
				c[i + 1] = b[i - 12] % 10 - 1 + '1';
			}
		}
	}
	c[14] = '\0';
}