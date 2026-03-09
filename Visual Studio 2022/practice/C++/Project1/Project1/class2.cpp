//#include<iostream>
//using namespace std;
//int main()
//{
//	int n, i, t;
//	cin >> n;
//	for (i = 1;; i++)
//	{
//		int a = n / 1000;
//		int b = (n - 1000 * a) / 100;
//		int c = (n / 10) % 10;
//		int d = n % 10;
//		if (a > b) { t = a; a = b; b = t; }
//		if (a > c) { t = a; a = c; c = t; }
//		if (a > d) { t = a; a = d; d = t; }
//		if (b > c) { t = b; b = c; c = t; }
//		if (b > d) { t = b; b = d; d = t; }
//		if (c > d) { t = c; c = d; d = t; }
//		int max = d * 1000 + c * 100 + b * 10 + a;
//		int min = a * 1000 + b * 100 + c * 10 + d;
//		if (max - min == 6174)
//		{
//			cout << i;
//			break;
//		}
//		else
//			n = max - min;
//	}
//}