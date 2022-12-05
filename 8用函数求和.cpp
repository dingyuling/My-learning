#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

int main()
{
	int x;
	int y;
	scanf("%d %d", &x, &y);//取x,y地址的值运算函数
	int add = x + y;//定义一个函数add，其值为x+y

	int sum = 0;//定义和为sum为0
	sum = sum + add;//和加函数为结果sum
	printf("sum=d\n",sum);//得出结果
	return 0;
}

/*#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

int add(int x, int y)//定义函数（定义两个空值）
{
	int c = 0;
	c = x + y;
	return c;//输出值为c
}
int main()
{
	int num1 = 0;
	int num2 = 0;
	scanf("%d %d", &num1, &num2);//取num的地址代入
	int sum = add(num1, num2);//add内运算代入进x,y，即运算c=x+y=num1+num2=sum
	printf("%d\n",sum);
	return 0;
}*/
//利用函数求和
