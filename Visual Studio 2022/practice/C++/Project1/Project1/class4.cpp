#include <iostream>
using namespace std;
void Jiemi(char input[], char output[]);
int main()
{
    char a[12], b[12];
    int i;
    cin.getline(a, 12);
    Jiemi(a, b);
    cout << b;
}
void Jiemi(char input[], char output[])
{
    int i;
    char a[12], b[12];
    for (i = 0; i <= 10; i++)
        a[i] = input[10 - i];
    a[11] = '\0';
    for (i = 3; i <= 10; i++)
        b[i - 3] = a[i];
    for (i = 0; i <= 2; i++)
        b[i + 8] = a[i];
    b[11] = '\0';
    for (i = 0; i <= 10; i++)
    {
        if (b[i] >= '5')
            b[i] = b[i] - 5;
        else if (b[i] < '5')
            b[i] = b[i] + 5;
    }
    for (i = 0; i <= 10; i++)
        output[i] = b[i];
    output[11] = '\0';
}