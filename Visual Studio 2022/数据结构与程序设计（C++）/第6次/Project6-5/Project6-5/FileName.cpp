#include<iostream>
#include<string>
using namespace std;
class student {
private:
	string name;
	int age, number;
	int score[3];
public:
	void setname(string a)
	{
		name = a;
	}
	void setage(int a)
	{
		age = a;
	}
	void setnumber(int a)
	{
		number = a;
	}
	void setscore(int a, int b, int c)
	{
		score[0] = a;
		score[1] = b;
		score[2] = c;
	}
	string getname()
	{
		return name;
	}
	int getage()
	{
		return age;
	}
	int getnumber()
	{
		return number;
	}
	int getallscore()
	{
		return score[0] + score[1] + score[2];
	}
	void getscore()
	{
		cout << score[0] << "\t" << score[1] << "\t" << score[2];
	}
};
void f1(student r[], int n);
void f2(student r[], int *n);
void f3(student r[], int *n);
void f4(student r[], int n);
int n = 2;
void main()
{
	cout << "大学生信息管理系统\n";
	int choice;
	student a[50];
	a[0].setname("张三"); a[1].setname("李四");
	a[0].setage(19); a[1].setage(18);
	a[0].setnumber(2025034); a[1].setnumber(2025019);
	a[0].setscore(95,82,69); a[1].setscore(87,92,73);
	do {
		cout << "1. Display all information\n2. Add a student\n3. Delete a student\n4. Sort\n5. Quit\n";
		cout << "请选择相关功能：";
		cin >> choice;
		if (choice == 1)
			f1(a, n);
		else if (choice == 2)
			f2(a, &n);
		else if (choice == 3)
			f3(a, &n);
		else if (choice == 4)
			f4(a, n);
	} while (choice != 5);
	cout << "退出大学生信息管理系统";
}
void f1(student r[], int n)
{
	int i;
	cout << "序号\t姓名\t学号\t年龄\t高数\t线代\t英语\n";
	for (i = 0; i < n; i++)
	{
		cout << i + 1 << "\t"
			<< r[i].getname() << "\t"
			<< r[i].getnumber() << "\t"
			<< r[i].getage() << "\t";
		r[i].getscore();
		cout << "\n" << endl;
	}
}
void f2(student r[], int *n)
{
	string a;
	int b, c, d1,d2,d3;
	cout << "请输入姓名：";
	cin >> a;
	r[*n].setname(a);
	cout << "请输入年龄：";
	cin >> b;
	r[*n].setage(b);
	cout << "请输入学号：";
	cin >> c;
	r[*n].setnumber(c);
	cout << "请输入高数/线代/英语的成绩：";
	cin >> d1 >> d2 >> d3;
	r[*n].setscore(d1, d2, d3);
	cout << endl;
	(*n)++;
}
void f3(student r[], int *n)
{
	cout << "请输入要删除的学生的序号：";
	int a, i;
	cin >> a;
	for (i = a - 1; i < *n - 1; i++)
		r[i] = r[i + 1];
	(*n)--;
	cout << endl;
}
void f4(student r[], int n)
{
	cout << "按学号（N）排序，按年龄（A）排序还是按总成绩（T）排序：";
	char c;
	int i, j;
	student t;
	cin >> c;
	if (c == 'N')
	{
		for (i = 0; i < n - 1; i++)
		{
			for (j = 0; j < n - 1 - i; j++)
			{
				if (r[j].getnumber() < r[j + 1].getnumber())
				{
					t = r[j];
					r[j] = r[j + 1];
					r[j + 1] = t;
				}
			}
		}
	}
	else if (c == 'A')
	{
		for (i = 0; i < n - 1; i++)
		{
			for (j = 0; j < n - 1 - i; j++)
			{
				if (r[j].getage() < r[j + 1].getage())
				{
					t = r[j];
					r[j] = r[j + 1];
					r[j + 1] = t;
				}
			}
		}
	}
	else if (c == 'T')
	{
		for (i = 0; i < n - 1; i++)
		{
			for (j = 0; j < n - 1 - i; j++)
			{
				if (r[j].getallscore() < r[j + 1].getallscore())
				{
					t = r[j];
					r[j] = r[j + 1];
					r[j + 1] = t;
				}
			}
		}
	}
	f1(r, n);
}