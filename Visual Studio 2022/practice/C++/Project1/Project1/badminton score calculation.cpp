//#include <iostream>
//#include<cmath>
//using namespace std;
//int main()
//{
//	int a, b;
//	a = b = 0;
//	cout << "现在A:B=" << a << ":" << b<<"\n";
//	while (a < 7 && b < 7)
//		{
//			cout << "获得下一分的选手是";
//			char scorer;
//			cin >> scorer;
//			if (scorer == 'A')
//				a += 1;
//			else
//				b += 1;
//			if (a > b)
//				cout << "现在A:B=" << a << ":" << b << "\n";
//			else if(b > a)
//				cout << "现在B:A=" << b << ":" << a << "\n";
//			else
//			{
//				if (scorer == 'A')
//					cout << "现在A:B=" << a << ":" << b << "\n";
//				else
//					cout << "现在B:A=" << b << ":" << a << "\n";
//			}
//		}
//	if (fabs(a - b) == 1)
//	{
//		while (fabs(a - b) <= 1)
//		{
//			cout << "获得下一分的选手是";
//			char scorer;
//			cin >> scorer;
//			if (scorer == 'A')
//				a += 1;
//			else
//				b += 1;
//			if (a > b)
//				cout << "现在A:B=" << a << ":" << b << "\n";
//			else if (b > a)
//				cout << "现在B:A=" << b << ":" << a << "\n";
//			else
//			{
//				if (scorer == 'A')
//					cout << "现在A:B=" << a << ":" << b << "\n";
//				else
//					cout << "现在B:A=" << b << ":" << a << "\n";
//			}
//			if (fabs(a - b) == 2)
//			{
//				if (a > b)
//					cout << "选手A获胜";
//				else 
//					cout << "选手B获胜";
//			} 
//		}
//	}
//	else if (a > b)
//		cout << "选手A获胜";
//	else
//		cout << "选手B获胜";
//}