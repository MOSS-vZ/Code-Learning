user_weight = float(input('请输入您的体重(单位：千克）：'))
user_height = float(input('请输入您的身高（单位：米）：'))
user_sex = input('请输入您的性别：')
user_BMI = user_weight/(user_height**2)
print(user_BMI)
if user_BMI < 18.5:
    if user_sex == '男':
        print ('先生，您的BMI指数属于偏瘦范围')
    else:
        print ('女士，您的BMI指数属于偏瘦范围')
elif 18.5 <= user_BMI < 25:
    if user_sex == '男':
        print ('先生，您的BMI指数属于正常范围')
    else:
        print ('女士，您的BMI指数属于正常范围')
elif 25 <= user_BMI < 30:
    if user_sex == '男':
        print ('先生，您的BMI指数属于偏胖范围')
    else:
        print ('女士，您的BMI指数属于偏胖范围')
else:
    if user_sex == '男':
        print ('先生，您的BMI指数属于肥胖范围')
    else:
        print ('女士，您的BMI指数属于肥胖范围')
