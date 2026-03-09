#include<iostream>
using namespace std;
void showtime(int a);
class Ctime {
private:
    int hour;
    int minute;
    int second;
public:
    void sethour(int a)
    {
        hour = a;
    }
    void setminute(int a)
    {
        minute = a;
    }
    void setsecond(int a)
    {
        second = a;
    }
    void add();
    void show();
};
int main()
{
    int h, m, s;
    cout << "请输入现在的时间：";
    Ctime a;
    cin >> h >> m >> s;
    a.sethour(h);
    a.setminute(m);
    a.setsecond(s);
    a.add();
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
    cout << "下一秒的时间是";
    showtime(hour);
    cout << ":";
    showtime(minute);
    cout << ":";
    showtime(second);
}
void showtime(int a)
{
    if (a < 10)
        cout << 0 << a;
    else
        cout << a;
}