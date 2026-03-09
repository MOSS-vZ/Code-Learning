#include<iostream>
using namespace std;
int main()
{
	float r, h,C,S,s,V,v;
	const float pi = 3.14;
	cin >> r >> h;
	C = 2 * pi * r;//圆周长
	S = pi * r * r;//圆面积
	s = 4 * pi * r * r;//圆球表面积
	V = 4.0 / 3 * pi * r * r * r;//圆球体积
	v = pi * r * r * h;//圆柱体积
	cout << "C=" << C << endl
		 << "S=" << S << endl
		 << "s=" << s << endl
		 << "V=" << V << endl
		 << "v=" << v << endl;

}