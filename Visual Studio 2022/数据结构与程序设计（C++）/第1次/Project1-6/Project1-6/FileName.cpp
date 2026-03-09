#include<iostream>
using namespace std;
int main()
{
	char x, y, z;//y为前一个字母，z为后一个字母
	cin >> x;
	if (x != 'a' && x != 'A' && x != 'z' && x != 'Z')
	{
		y = x - 1;
		z = x + 1;
	}
	else if (x == 'a' || x == 'A')
	{
		y = x + 25;
		z = x + 1;
	}
	else
	{
		y = x - 1;
		z = x - 25;
	}
	cout << "前一个字母是" << y<<endl
		 << "后一个字母是" << z<<endl;
}