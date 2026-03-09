//#include <iostream>
//using namespace std;
//int main()
//{
//	int a, b;
//	char c1,c2;
//	c1 = c2 = 0;
//	a = b = 0;
//	cout << "请分别输入A、B选手的比分（0，15，30，40，A）:";
//	cin >> a >> b;//若是输入A，则不会被赋值，怎么解决？
//	cout << "目前A、B选手的比分为A：B=" << a << "：" << b << "\n";
//	cout << "接下来得分的选手是(A，B)：";
//	char scorer = 0;
//	cin >> scorer;
//	if (scorer == 'A')
//		if (a < 30 && b <= 40)
//			a += 15;
//		else if (a == 30 && b <= 40)
//			a += 10;
//		else if ((a == 40 && b < 40) || (a == 'A' && b == 40))
//			a = 1;
//		else if (a == 40 && b == 40)
//			c1 = 'A';
//		else
//			b = 40;
//	else
//		if (b < 30 && a <= 40)
//			b += 15;
//		else if (b == 30 && a <= 40)
//			b += 10;
//		else if ((b == 40 && a < 40) || (b == 'A' && a == 40))
//			b = 1;
//		else if (b == 40 && a == 40)
//			c2 = 'A';
//		else
//			a = 40;
//	if (a == 1)
//		cout << "选手A获胜";
//	else if (b == 1)
//		cout << "选手B获胜";
//	else if (c1 == 0 && c2 == 0)
//		cout << "选手比分为A：B为" << a << ":" << b << "\n";
//	else if (c1 != 0)
//		cout << "选手比分为A：B为" << c1 << ":" << b << "\n";
//	else
//		cout << "选手比分为A：B为" << a << ":" << c2 << "\n";
//}