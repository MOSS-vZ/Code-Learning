//#include<iostream>
//#include<cmath>
//using namespace std;
//int main()
//{
	//Q1:
	//int num1, num2;
	//int count = 0;
	//for (num1 = 1; num1 <= 10; num1++)
	//{
	//	for (num2 = 1; num2 <= 10; num2++)
	//		if (fabs(num1 - num2) > 1 && fabs(num1-num2)!=9/* && num2 >= 1 && num2 <= 10*/)
	//		{
	//			//cout << "小红的座位号为" << num1 << "，" << "小明的座位号为" << num2 << endl;
	//			count++;
	//		}
	//}
	//cout << "一共有" << count << "种买票的方法。" << endl;

	//Q2
	//int num;
	//cout << "请输入一个小于100的偶数：";
	//cin >> num;
	//while (num % 2 != 0||num>=100)
	//{
	//	cout << "输入错误，请重新输入：";
	//	cin >> num;
	//}
	////cout << num;
	//int i, i1;
	//for (i = 2; i <= 100; i++)
	//{
	//	for (i1 = 2; i1 <= sqrt(i); i1++)
	//	{
	//		if (i % i1 == 0)
	//			break;
	//	}
	//	if (i1 > sqrt(i))
	//	{
	//		int j = num - i,j1;
	//		for (j1 = 2; j1 <= sqrt(j); j1++)
	//		{
	//			if (j % j1 == 0)
	//				break;
	//		}
	//		if (j1 > sqrt(j))
	//		{
	//			if (i <= j)
	//				cout << num << "=" << i << "+" << j << endl;
	//		}	
	//	}
	//}

	//Q3
	//float sum,sum2, a;
	//sum = 0;
	//sum2 = 0;
	//for (int i = 1; i <=10;)
	//{
	//	cout << "请输入第"<<i<<"位同学的分数：";
	//	cin >> a;
	//	if( a<0||a > 100)
	//	{
	//		cout << "输入错误，请重输：";
	//		continue;
	//	}
	//	sum += a;
	//	sum2 += a * a;
	//	i++;
	//}
	//float ave = sum / 10;
	//float s2 = (sum2 - 10 * ave * ave) / 10;
	//cout <<"平均数为" << ave << endl;
	//cout << "方差为" << s2 << endl;

	//Q4
	//int a1, a2, b1, b2;
	//char c1, c2;
	//cin >> a1 >> c1 >> b1 >> a2 >> c2 >> b2;
	////cout << a1 << a2 << b1 << b2;
	//int b = b1 * b2;
	//int a = a1 * b2 + a2 * b1;
	//int i=a>b?a:b;
	//for (; i <= a || i <= b; i--)
	//{
	//	if(a % i == 0 && b % i == 0)
	//	{
	//		a /= i;
	//		b /= i;
	//		break;
	//	}
	//}
	//if (a % b != 0)
	//	cout << a << "/" << b << endl;
	//else
	//	cout << a << endl;

	//Q5
	//int n;
	//cin >> n;
	//int i,k=0;
	//for (i = 1; i < n; i++)
	//{
	//	int sum = 0;
	//	for (int j = i;sum<=n; j++)
	//	{
	//		sum += j;
	//		if (sum == n)
	//		{
	//			//if ((j - i + 1) % 2 != 0)
	//			//{
	//				for (k = i; k < j; k++)
	//					cout << k << "+";
	//				cout << j;	
	//				cout << endl;
	//			//}
	//		}
	//	}
	//}
	//if (k == 0)
	//	cout << "NONE";
//}