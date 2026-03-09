#include<iostream>
#include<string>
#include <random>
#include <chrono>
using namespace std;
class roles {
private:
    int hp;
    string name;
    float attack;
    int defence;
    int speed;
public:
    string getname();
    int getattack();
    int gethp();
    int getdefence();
    int getspeed();
    void setspeed(int a)
    {
        speed = a;
    }
    void setname(string a)
    {
        name = a;
    }
    void setattack(int a)
    {
        attack = a;
    }
    void sethp(int a)
    {
        hp = a;
    }
    void setdefence(int a) {
        defence = a;
    }
    void rattack(roles* p);
    void rdefence();
    void defenceback();
    void damage(int a);
};
std::random_device rd;
std::mt19937 gen(rd());
std::uniform_int_distribution<int> dis1(1, 100);
std::uniform_int_distribution<int> dis2(1, 100);
int main()
{
    roles a, b;
    a.setname("喜羊羊");
    a.setattack(50);
    a.setdefence(40);
    a.sethp(100);
    a.setspeed(80);
    b.setname("灰太狼");
    b.sethp(100);
    b.setattack(80);
    b.setspeed(60);
    b.setdefence(50);
    cout << "游戏开始！" << endl;
    cout << "灰太狼进攻羊村，喜羊羊前来迎战";
    int i = 1;
    while (a.gethp() >= 0 && b.gethp() >= 0)
    {
        char as, bs;
        cout << "第" << i << "轮对决开始" << endl;
        cout << a.getname() << "请选择进攻还是防守（进攻则按A，防守则按D：）";
        cin >> as;
        cout << b.getname() << "请选择进攻还是防守（进攻则按A，防守则按D：）";
        cin >> bs;
        if (as == 'D') a.rdefence();
        if (bs == 'D') b.rdefence();
        if (as == 'A') a.rattack(&b);
        if (bs == 'A') b.rattack(&a);
        cout << "第" << i << "轮对决结束" << endl;
        cout << a.getname() << "的血量为" << a.gethp() << "\n";
        cout << b.getname() << "的血量为" << b.gethp() << "\n";
        if (as == 'D') a.defenceback();
        if (bs == 'D') b.defenceback();
        ++i;
    }
}
string roles::getname()
{
    return name;
}
int roles::getattack()
{
    return attack;
}
int roles::gethp()
{
    return hp;
}
int roles::getdefence()
{
    return defence;
}
int roles::getspeed()
{
    return speed;
}
void roles::rattack(roles* p)
{
    int a = dis1(gen);
    int b = dis2(gen);
    if (a < 20)
    {
        cout << "角色" << getname() << "获得暴击，攻击加强\n";
        attack *= 1.5;
    }
    if (speed > p->getspeed() && b > 50)
        (*p).damage(attack);
    else
        cout << "角色" << (*p).getname() << "速度太快了，进攻失败\n";
    if (a < 20)
        attack /= 2;
}
void roles::damage(int a)
{
    if (a > getdefence())
        hp -= (a - getdefence());
}
void roles::rdefence()
{
    cout << "角色" << getname() << "防御提升\n";
    defence *= 2;
}
void roles::defenceback()
{
    defence /= 2;
}