//#include<iostream>
//#include<iomanip>
//using namespace std;
//int main()
//{
	//斐波那契数列
	//int i;
	//int f[20] = { 1,1 };
	//for (i = 2; i < 20; i++)
	//	f[i] = f[i - 1] + f[i - 2];
	//for (i = 0; i < 20; i++)
	//{
	//	if (i % 5 == 0)
	//		cout << "\n";
	//	cout<<setw(12)<< f[i];
	//}
	// 冒泡算法
	//int a[10] = {1,4,6,5,3,2,8,7,2,4};
	//int i,j,t;
	////for (i = 0; i < 10; i++)
	////	cin >> a[i];
	//for (i = 0; i < 9; i++)
	//{
	//	for (j = 0; j < 9 - i; j++)
	//	{
	//		if (a[j] > a[j + 1])
	//		{
	//			t = a[j];
	//			a[j] = a[j + 1];
	//			a[j + 1] = t;
	//		}
	//	}
	//}
	//for (i = 0; i < 10; i++)
	//	cout << a[i] << " ";
	//int x,low,mid,high,s;
	//cin >> x;
	//low = 0;
	//high = 9;
	//for (; low <= high;)
	//{
	//	mid = (low + high) / 2;
	//	if (a[mid] > x)
	//		high = mid - 1;
	//	else if (a[mid] == x)
	//	{
	//		s = mid + 1;
	//		break;
	//	}
	//	else
	//		low = mid + 1;
	//}
	//if (low <= high)
	//	cout << x << "是第" << s << "个数。";
	//else
	//	cout << "没有输入的数。";
	//进制转换
	//int a[10];
	//int i, j,n=0;
	//cin >> i;
	//while (i != 0)
	//{
	//	j = i % 2;
	//	a[n++] = j;
	//	i /= 2;
	//}
	//for (i = n-1 ; i >= 0; i--)
	//	cout << a[i];
	//找出重复数
	//int a[10];
	//int count[10] = {0};
	//int i;
	//for (i = 0; i < 10; i++)
	//	cin >> a[i];
	//for (i = 1; i < 10; i++)
	//{
	//	for (int j = i-1; j >= 0; j--)
	//	{
	//		if (a[j] == a[i])
	//			count[i]++;
	//	}
	//}
	//for (i = 0; i < 10; i++)
	//{
	//	if (count[i] == 1)
	//		cout << a[i] << " ";
	//	else
	//		cout << "NONE"; 
	//}

//}