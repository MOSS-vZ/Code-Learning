#include<iostream>
#include<stack>
using namespace std;

void d_to_o(int n)
{
	stack<int>s;//定义整数栈
	while (n != 0)
	{
		s.push(n % 8);
		n /= 8;
	}
	while (!s.empty())
	{
		cout << s.top();//输出栈顶的数字
		s.pop();//清除栈顶的数字
	}
	cout << endl;
}

int main(int argc, char *argv[])
//第一个参数记录命令行参数的个数，第二个参数记录指向命令行中每一个参数字符串的指针
{
	int n = 2468;
	if (argc >= 2)
		n = atoi(argv[argc - 1]);
	d_to_o(n);
}