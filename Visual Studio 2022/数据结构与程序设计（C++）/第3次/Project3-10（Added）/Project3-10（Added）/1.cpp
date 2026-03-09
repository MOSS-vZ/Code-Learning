//random_device rd;
//mt19937 gen(rd());
//uniform_int_distribution<> dis1(1, 33);
//uniform_int_distribution<> dis2(1, 15);
//int red[6], blue[1], i;
//char result[15], guess[15];
//for (i = 0; i < 6; i++)
//	red[i] = dis1(gen);
//blue[0] = dis2(gen);
////for (i = 0; i < 6; i++)
////	cout << red[i] << " ";
////cout << blue[0]<<endl;
//for (i = 0; i < 14; i += 2)
//{
//	if (i < 12)
//	{
//		if (red[i / 2] < 10)
//		{
//			result[i] = '0';
//			result[i + 1] = red[i / 2] - 1 + '1';
//		}
//		else
//		{
//			result[i] = red[i / 2] / 10 - 1 + '1';
//			result[i + 1] = red[i / 2] % 10 - 1 + '1';
//		}
//	}
//	else
//	{
//		if (blue[i - 12] < 10)
//		{
//			result[i] = '0';
//			result[i + 1] = blue[i - 12] - 1 + '1';
//		}
//		else
//		{
//			result[i] = blue[i - 12] / 10 - 1 + '1';
//			result[i + 1] = blue[i - 12] % 10 - 1 + '1';
//		}
//	}
//}
//result[14] = '\0';