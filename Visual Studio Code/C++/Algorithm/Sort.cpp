#include<iostream>
using namespace std;

#define N 10

// 冒泡排序
template<typename T>            // 模板化，可以传递任意类型的参数
void maopao_sort(T a[])
{
    int i, j;
    for (i = 0;i < N - 1;i++)
    {
        for (j = 0;j < N - 1 - i;j++)
        {
            if (a[j] > a[j + 1])
            {
                T temp;
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
}

// 选择排序
template<typename T>
void select_sort(T a[])
{
    int i, j;
    for (i = 0;i < N - 1;i++)
    {
        for (j = i + 1;j < N;j++)
        {
            if (a[j] < a[i])    // 找到后面部分数组中的最小（大）值
            {
                T temp;
                temp = a[j];
                a[j] = a[i];
                a[i] = temp;    // 放到该部分的最前面
            }
        }
    }
}

// 插入排序
template<typename T>
void insert_sort(T a[])
{
    int i, j;
    for (i = 1;i < N;i++)
    {
        T temp = a[i];              // 前面为已经排序的数组
        // 自己写的
        for (j = i - 1;j >= 0;j--)
        {
            if (temp < a[j])
            {
                a[j + 1] = a[j];    // 有能插入的位置就后移一位
            }
            else
                break;              // 没有直接跳出循环
        }

        // 另一种写法（标准的）
        // j = i - 1;
        // while (j >= 0 && temp < a[j])
        // {
        //     a[j + 1] = a[j];
        // }

        a[j + 1] = temp;
    }
}

int main()
{
    int wait_sorted[N] = { 1,23,2,43,46,12,49,86,77,37 };
    cout << "被排序的数组为：";
    for (int i = 0;i < N;i++)
    {
        cout << wait_sorted[i] << " ";
    }
    cout << endl;               // 显示未排序的数组

    // 冒泡排序
    // maopao_sort(wait_sorted);
    // 选择排序
    // select_sort(wait_sorted);
    // 插入排序
    insert_sort(wait_sorted);

    cout << "排序后的数组为：";
    for (int i = 0;i < N;i++)
    {
        cout << wait_sorted[i] << " ";
    }
    cout << endl;               // 输出排序后的数组
}
