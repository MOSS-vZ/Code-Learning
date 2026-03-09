#include<iostream>
#include<string>
using namespace std;
class character {
private:
    int level;
    int age;
    string name;
public:
    character(int a)
    {
        level = a;
    }
    character(string a)
    {
        name = a;
    }
    void getlevel()
    {
        cout << level;
    }
    void getage()
    {
        cout << age;
    }
    void getname()
    {
        cout << name;
    }
};
int main()
{
    character xiao(10);
    // xiao.getage();
    xiao.getlevel();
}