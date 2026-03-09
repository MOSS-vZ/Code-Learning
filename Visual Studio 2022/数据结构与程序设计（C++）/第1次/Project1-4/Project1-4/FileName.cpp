#include<iostream>
using namespace std;
int main()
{
	float gram, carat, pound, jin,ounce;
	cin >> gram;
	carat = gram * 5;
	jin = gram / 500;
	pound = gram / 454;
	ounce = gram / 454 * 16;
	cout << carat << "克拉" << endl
		 << jin << "斤" << endl
		 << pound << "磅" << endl
		 << ounce << "盎司" << endl;
}		 
/*浮点类型更合适，因为不同单位换算时的进制有时并不准确，
而且经常涉及到除法，使用整型得到的结果误差过大。*/