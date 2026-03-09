#include<iostream>
using namespace std;
class CRectangle {
private:
	float chang, kuan, S, C, x, y;
public:
	void setchang(float a)
	{
		chang = a;
	}
	void setkuan(float a)
	{
		kuan = a;
	}
	void setpoint(float a, float b)
	{
		x = a;
		y = b;
	}
	float Area()
	{
		S = chang * kuan;
		return S;
	}
	void Move(float a, float b)
	{
		x += a;
		y += b;
	}
	void Resize(float a, float b)
	{
		chang *= a;
		kuan *= b;
	}
	void show()
	{
		cout << "矩形的长为" << chang << "，宽为" << kuan << endl;
		cout << "面积为" << Area() << endl;
		cout << "左下角点的坐标为(" << x << "," << y << ")\n\n";
	}
};
int main()
{
	CRectangle a;
	float chang, kuan, x, y;
	cout << "请输入矩形的长和宽：";
	cin >> chang >> kuan;
	cout << "请输入矩形左下角点的坐标：";
	cin >> x >> y;
	a.setchang(chang);
	a.setkuan(kuan);
	a.setpoint(x, y);
	cout << "矩形的信息：";
	a.show();
	cout << "请输入移动的偏移量：";
	cin >> x >> y;
	a.Move(x, y);
	cout << "请输入长宽的改变比例：";
	cin >> x >> y;
	a.Resize(x, y);
	cout << "矩形的信息：";
	a.show();
}