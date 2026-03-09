#include<iostream>
#include<string>
using namespace std;
struct Point {
	float x;
	float y;
};
class CTriangle {
private:
	struct Point a[3];
public:
	void set(Point x, Point y, Point z)
	{
		a[0] = x;
		a[1] = y;
		a[2] = z;
	}
	string check(Point m);
};
int main()
{
	struct Point a, b, c,d;
	CTriangle t;
	cout << "请输入三角形三个顶点的坐标：";
	cin >> a.x >> a.y >> b.x >> b.y >> c.x >> c.y;
	t.set(a, b, c);
	cout << "请输入要判断的点的坐标：";
	cin >> d.x >> d.y;
	cout << t.check(d);
}
string CTriangle::check(Point m)
{
	int i, t[3] = { 0 }, s = 1;
	for (i = 0; i < 3; i++)
	{
		int j;
		if (i != 2)
			j = i + 1;
		else
			j = i - 2;
		if (a[i].x == a[j].x)
		{
			float c1 = m.x - a[i].x;
			float c2 = a[3 - i - j].x - a[i].x;
			if (c1 * c2 > 0)
				t[i] = 1;
			else if (c1 * c2 == 0)
				t[i] = 2;
		}
		else 
		{
			float d1 = ((m.y - a[i].y) - (a[i].y - a[j].y) / (a[i].x - a[j].x) * (m.x - a[i].x));
			float d2 = ((a[3-i-j].y - a[i].y) - (a[i].y - a[j].y) / (a[i].x - a[j].x) * (a[3-i-j].x - a[i].x));
			if (d1 * d2 > 0)
				t[i] = 1;
			else if (d1 * d2 == 0)
				t[i] = 2;
		}
		s *= t[i];
	}
	if (s == 1)
		return "inside";
	else if (s > 1)
		return "onside";
	else
		return "outside";
}