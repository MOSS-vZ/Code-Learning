/*#include<stdio.h>
int main()
{
	double sum = 0;
	int i = 1;
	int n = 0;
	scanf_s("%d",&n);
	for (i = 1; i <= n; i++) {
		sum += 1.0 / i;
	}
	printf("%f", sum);

	return 0;
}*/

/*正序分解整数
#include<stdio.h>
int main()
{
	int x = 0;
	int i = 0;
	int s = 0;
	int mask = 1;
	scanf_s("%d",&x);
	int t = x;
	while (t > 9) {
		t /= 10;
		mask *=10;
	}
	//printf("%d", mask);
	while (mask > 0) {
		i = x / mask;
		x %= mask;
		printf("%d", i);
		if (mask > 1) {
			printf(" ");
		}
		mask /= 10;
	}

return 0;
}*/

/*逆序分解整数
#include<stdio.h>
int main()
{
	int x = 0;
	int i = 0;
	scanf_s("%d",&x);
	while (x > 0) {
		i = x % 10;
		printf("%d", i);
		if (x > 9) {
			printf(" ");
		}
		x /= 10;
		}
		
	return 0;
}*/

/*生成规则数阵
#include<stdio.h>
int main()
{
	int a = 0;
	int i, j, k;
	int s = 0;
	scanf_s("%d",&a);
	for (i = a; i <= a + 3; i++) {
		for (j = a; j <= a + 3; j++) {
			for (k = a; k <= a + 3; k++) {
				if (i != j && j != k && i != k) {
					s++;
					printf("%d", i * 100 + j * 10 + k);
					if (s == 6) {
						printf("\n");
						s = 0;
					}else {
						printf(" ");
					}
				}
			}

		}
	}
	return 0;
}*/

//水仙花数
/*#include<stdio.h>
int main()
{
	int n = 0;
	scanf_s("%d",&n);
	int mask = 1;
	int c = 1;
	while (c < n) {
		mask *= 10;
		c++;
	}
	int i;
	for (i = mask;i<mask*10; i++) {
		int s = 0;//注意
		int j = i;
		while (j > 0) {
			int x = j % 10;
			j /= 10;
			int b = 0;//注意
			int y = 1;//注意
			for (;b < n;b++) {
				y *= x;
			}
			s += y;
		}
		if (s == i) {
			printf("%d\n",s);
		}
	}

	return 0;
}*/
//总结：在循环过程中要注意变量定义的位置，不要都在循环外部定义！！

//猜数游戏
/*#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	srand(time(0));
	int a = rand();
	if (a >= 100) {
		a = a % 100;
	}
	printf("我已经生成好1到100的数了\n请开始猜数游戏吧！\n");
	int s = 0;
	int n = 0;
	do {
		n++;
		scanf_s("%d", &s);
		if (s > a) {
			printf("你猜的数大了！\n");
		}else if(s < a){
			printf("你猜的数小了！\n");
		}
	} while (s != a);
	printf("恭喜你成功了！共用了%d次。",n);

	return 0;
}*/