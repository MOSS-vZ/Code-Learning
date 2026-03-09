#include<iostream>
using namespace std;
void showtime(int a);
class Ctime {
private:
    int hour;
    int minute;
    int second;
public:
    void set(int a, int b, int c)
    {
        hour = a;
        minute = b;
        second = c;
    }
    void add();
    void show();
};
int main()
{
    int h, m, s;
    bool y;
    Ctime a;
    cout << "请输入现在的时间：";
    do {
        cin >> h >> m >> s;
        y = (h >= 0 && h < 24) && (m >= 0 && m < 60) && (s >= 0 && s < 60);
        if (!y)
            cout << "输入不符合要求，请重新输入：";
    } while (!y);
    a.set(h, m, s);
    cout << "此时的时间为";
    a.show();
    a.add();
    cout << "下一秒的时间为";
    a.show();
}
void Ctime::add()
{
    second++;
    if (second == 60)
    {
        second = 0;
        minute++;
        if (minute == 60)
        {
            minute = 0;
            hour++;
            if (hour == 24)
                hour = 0;
        }
    }
}
void Ctime::show()
{
    showtime(hour);
    cout << ":";
    showtime(minute);
    cout << ":";
    showtime(second);
    cout << endl;
}
void showtime(int a)
{
    if (a < 10)
        cout << 0 << a;
    else
        cout << a;
}