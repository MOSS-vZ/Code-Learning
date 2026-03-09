#include <iostream>
using namespace std;
int WinOrNot(int c[9][9]);
int equival(int* p, int i, int j);
int main()
{
    int a[9][9] = { 0 }, i, j, t;
    do
    {
        cout << "请输入落子的位置：";
        cin >> i >> j;
        cout << "请输入落子颜色（黑为1，白为2）：";
        cin >> a[i - 1][j - 1];
        t = a[i - 1][j - 1];
    } while (WinOrNot(a));
    if (t == 1)
        cout << "黑棋获胜！";
    else
        cout << "白棋获胜！";
}
int WinOrNot(int c[9][9])
{
    int i, j, t;
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 9; j++)
        {
            t = 0;
            if (*(c[i] + j) != 0)
            {
                if (equival(c[i] + j, i, j))
                    goto loop;
                else
                    t = 1;
            }
            else
                t = 1;
        }
    }
loop:
    return t;
}
int equival(int* p, int i, int j) // 还要检查另一条对角线
{
    int t1 = 0, t2 = 0, t3 = 0, t4 = 0;
    if (j + 4 < 9)
    {
        t1 = (*p == *(p + 1) && *p == *(p + 2) && *p == *(p + 3) && *p == *(p + 4));
    }
    if (i + 4 < 9)
    {
        t2 = (*p == *(p + 9) && *p == *(p + 18) && *p == *(p + 27) && *p == *(p + 36));
    }
    if (j + 4 < 9 && i + 4 < 9)
    {
        t3 = (*p == *(p + 10) && *p == *(p + 20) && *p == *(p + 30) && *p == *(p + 40));
    }
    if (j - 4 >= 0 && i + 4 < 9)
    {
        t4 = (*p == *(p + 8) && *p == *(p + 16) && *p == *(p + 24) && *p == *(p + 32));
    }
    if (t1 == 1 || t2 == 1 || t3 == 1 || t4 == 1)
        return 1;
    else
        return 0;
}