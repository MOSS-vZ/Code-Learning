#include<iostream>
struct Employer {
	char name[20];
	char phone_number[12];
	int wage;
};
void Input(struct Employer* c, int n);
void AddWage(struct Employer* c, int n);
void Output(struct Employer* c, int n);
void Find(struct Employer* c, int n,char *b);
int same(char* c1, char* c2);
void Sort(struct Employer* c, int n);
using namespace std;
int main()
{
	struct Employer c[5];
	Input(c, 5);
	AddWage(c, 5);
	cout << "工资翻倍后\n";
	Output(c, 5);
	cin.ignore();//清除换行符，问的AI
	char name[20];
	cout << "请输入要查找的员工姓名：";
	cin.getline(name, 20);
	Find(c, 5, name);
}
void Input(struct Employer* c, int n)
{
	int i;
	for (i = 0; i < n; i++)
	{
		cout << "请输入第" << i + 1 << "位员工的姓名，电话号码和工资：";
		cin >> (c + i)->name;
		cin >> (c + i)->phone_number;
		cin >> (c + i)->wage;
	}
}
void AddWage(struct Employer* c, int n)
{
	int i;
	for (i = 0; i < n; i++)
		(c + i)->wage *= 2;
}
void Output(struct Employer* c, int n)
{
	Sort(c,5);
	int i;
	for (i = 0; i < n; i++)
	{
		cout << "第" << i + 1 << "位员工的姓名，电话号码和工资为："
			<< (c + i)->name << " "
			<< (c + i)->phone_number << " "
			<< (c + i)->wage << endl;
	}
}
void Find(struct Employer* c, int n, char* b)
{
	int i;
	for (i = 0; i < n; i++)
	{
		if(same((c+i)->name,b))
			break;
	}
	if (i < n)
		cout << "该员工的电话号码和工资为："
		<< (c + i)->phone_number << " "
		<< (c + i)->wage;
	else
		cout << "并未找到该员工！";
}
int same(char* c1, char* c2)
{
	int i, cnt = 1;
	for (i = 0; *(c1 + i) != '\0'&& *(c2 + i) != '\0'; i++)
	{
		if (*(c1 + i) != *(c2 + i))
		{
			cnt = 0;
			break;
		}
	}
	if (cnt == 1)
		return 1;
	else
		return 0; 
}
void Sort(struct Employer* c, int n)
{
	int i, j;
	struct Employer t;
	for (i = 0; i < n - 1; i++)
	{
		for (j = 0; j < n - 1 - i; j++)
		{
			if ((c + j)->wage < (c + j + 1)->wage)
			{
				t = *(c + j);
				*(c + j) = *(c + j + 1);
				*(c + j + 1) = t;
			}
		}
	}
}