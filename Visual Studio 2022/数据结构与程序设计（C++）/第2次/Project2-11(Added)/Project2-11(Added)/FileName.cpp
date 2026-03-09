#include<iostream>
#include <random>
#include<cmath>
using namespace std;
int main()
{
loop:
	cout << "请选择模式（1或2）：";
	int a=0;
	cin >> a;
	cin.ignore(numeric_limits<streamsize>::max(), '\n');//清除缓冲区的换行符
	cout << "若想回到主菜单，则按Q\n";
	
	if (a == 1)
	{
		while (1)
		{
			random_device rd;
			mt19937 gen(rd());
			uniform_int_distribution<> dis(1, 9);
			char x[3];
			int num1 = dis(gen);
			int num2 = dis(gen);
			cout << num1 << "*" << num2 << "=";
			cin.getline(x,3);//用字符串储存输入的数
			int y = 0;
			if (x[1] == '\0' && x[0] != 'Q')
				y = x[0]-'1'+1;
			else if (x[0] == 'Q')
				y = 'Q';
			else if (x[2] == '\0')
				y = (x[0] - '1' + 1) * 10 + x[1] - '1' + 1;//将字符串转换为整数
			if ((y == num1 * num2)&& y != 'Q')
				cout << "正确！\n";
			else if (y == 'Q')
				break;
			else if(y != num1 * num2&&y!=0)
				cout << "很遗憾答错了！\n";
		}
		goto loop;
	}
	else if (a == 2)
	{
		int b[45], i = 0, m = 0, c[45], d[45];
		for (int j = 1; j < 10; j++)
		{
			for (int k = j; k < 10; k++)
			{
				b[i] = j * k;
				c[i] = j;
				d[i] = k;
				i++;
			}
		}//生成乘法口诀表，并将对应的数存进数组c，d
		while (1)
		{
			m = 0;
			int t = 0;
			random_device rd;
			mt19937 gen(rd());
			uniform_int_distribution<> dis(1, 81);
			int num3 = dis(gen);
			cout << num3 << endl;
			char y = 0;
			cin >> y;
			if (y == 'Q')
				goto loop;
			for (i = 0; i < 45; i++)
			{
				if (b[i] == num3)
				{
					m = 1;//是乘法口诀表里的数
					break;
				}
			}
			if (m == 0)//不是乘法口诀表里的数
			{
				int min = 100000;
				for (i = 0; i < 45; i++)
				{
					if (abs(b[i] - num3) < min)
					{
						min = abs(b[i] - num3);
						t = i;
					}
				}//寻找最近的
			}
			if (y == 'Y' && m == 1)
				cout << "回答正确"<<endl;
			else if (y == 'N' && m == 1)
				cout << "回答错误" << endl;
			else if (y == 'Y' && m == 0)
				cout << "回答错误" << c[t] << " " << d[t] << endl;
			else if (y == 'N' && m == 0)
				cout << "回答正确" << c[t] << " " << d[t] << endl;
			else
				cout << "输入错误" << endl;
		}
	}
	else
		goto loop;
}