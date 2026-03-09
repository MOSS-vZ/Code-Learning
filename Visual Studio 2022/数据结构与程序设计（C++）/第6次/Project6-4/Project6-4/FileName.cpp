#include<iostream>
#include<cmath>
using namespace std;
class CRectangle {
private:
	float lx, ly, rx, ry, d, S;
public:
	void set(float a, float b, float c, float d)
	{
		lx = a;
		ly = b;
		rx = c;
		ry = d;
	}
	float calculateS()
	{
		S = fabs(ly - ry) * fabs(rx - lx);
		return S;
	}
	float calculated()
	{
		float x = (lx + rx) / 2;
		float y = (ly + ry) / 2;
		d = sqrt(x * x + y * y);
		return d;
	}
	float getlx()
	{
		return lx;
	}
	float getrx()
	{
		return rx;
	}
	float getly()
	{
		return ly;
	}
	float getry()
	{
		return ry;
	}
};
void SortByArea(CRectangle r[], int n);
void SortByLength(CRectangle r[], int n);
void main()
{
	CRectangle r[5];
	int i;
	float lx, ly, rx, ry;
	for (i = 0; i < 5; i++)
	{
		cout << "请输入第" << i + 1 << "个矩形的坐标信息：";
		cin >> lx >> ly >> rx >> ry;
		r[i].set(lx, ly, rx, ry);
		r[i].calculateS();
		r[i].calculated();
	}
	SortByArea(r, 5);
	SortByLength(r,5);
}
void SortByArea(CRectangle r[], int n)
{
	CRectangle t;
	int i, j;
	for (i = 0; i < n - 1; i++)
	{
		for (j = 0; j < n - 1 - i; j++)
		{
			if (r[j].calculateS() < r[j + 1].calculateS())
			{
				t = r[j];
				r[j] = r[j + 1];
				r[j + 1] = t;
			}
		}
	}
	cout << "按矩形面积从大到小排序\n";
	for (i = 0; i < n; i++)
	{
		cout << "第" << i + 1 << "个矩形的左下角坐标为(" << r[i].getlx() << "," << r[i].getly()
			<< ")，右上角坐标为(" << r[i].getrx() << "," << r[i].getry()
			<< ")，中心与原点的距离为" << r[i].calculated()
			<< ",面积为" << r[i].calculateS() << endl;
	}
}
void SortByLength(CRectangle r[], int n)
{
	CRectangle t;
	int i, j;
	for (i = 0; i < n - 1; i++)
	{
		for (j = 0; j < n - 1 - i; j++)
		{
			if (r[j].calculated() < r[j + 1].calculated())
			{
				t = r[j];
				r[j] = r[j + 1];
				r[j + 1] = t;
			}
		}
	}
	cout << "按矩形中心与原点的距离从大到小排序\n";
	for (i = 0; i < n; i++)
	{
		cout << "第" << i + 1 << "个矩形的中心与原点的距离为" << r[i].calculated() << endl;
	}
}