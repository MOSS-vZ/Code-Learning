#include<iostream>
#include<random>
using namespace std;
int main()
{
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<int> dis(1, 100);
    int rdm = dis(gen);
    int i,a;
    for (i = 1; i <= 5; i++)
    {
        cin >> a;
        if (a == rdm)
            break;
        else if (a > rdm)
            cout << "你猜的价格高了！\n";
        else
            cout<< "你猜的价格低了！\n";
    }
    if (i >= 6)
        cout << "Sorry!";
    else
        cout << "You get it!";
}