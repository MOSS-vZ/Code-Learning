"""c = {"小明":3.6,"小华":3.7,"小亮":3.8,"小李":3.9,"小帅":4.0,}
for name,gpa in c.items():
    if gpa >= 3.8:
       print("恭喜你{0}！您的绩点为{1}".format(name,gpa))"""

"""def calculate_BMI(height,weight):
    BMI = weight/height**2
    if BMI <= 18.5:
        category = "偏瘦"
    elif BMI <= 25:
        category = "正常"
    elif BMI <= 30:
        category = "偏胖"
    else:
        category = "肥胖"
    print("您的BMI分类为" + category)
    return BMI
result = calculate_BMI(1.75,65)
print(result)"""

"""class Student:
    def __init__(self,name,student_id):
        self.name = name
        self.student_ID = student_id
        self.grades = {"语文":0,"数学":0,"英语":0}
    def set_grade(self,course,grade):
        if course in self.grades:
            self.grades[course] = grade
    def print_grade(self):
        for course in self.grades:
            print(f"{course}：{self.grades[course]}。")
student1 = Student("小明",10086)
student1.set_grade("语文",118)
student1.set_grade("数学",134)
student1.set_grade("英语",141)
student1.print_grade()"""

"""s = int(input("请输入一个整数："))
i = 1
while s >= 10:
    s=s/10
    i += 1
print(f"该数字有{i}位。")"""

import random
a = random.randint(1,100)
print("已经生成好1到100的随机数\n可以开始猜数游戏啦！\n")
s = 0
n = 0
while s != a:
    s = int(input())
    n += 1
    if s > a:
        print("你猜的数大了！")
    elif s < a:
        print("你猜的数小了！")
print(f"恭喜你成功了，共用了{n}次。")