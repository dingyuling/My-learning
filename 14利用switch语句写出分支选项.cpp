#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

int main()
{
	int i;//定义一个需要赋值的

	printf("输入你的值：\n");
	scanf("%d", &i);

	switch (i)//无需加符号
	{
		case 1://case后加：
			printf("周一\n");
			break;//每一个case结束以break
		case 2:
			printf("周二\n");
			break;
		case 3:
			printf("周三\n");
			break;
		case 4:
			printf("周四\n");
			break;
		case 5:
			printf("周五\n");
			break;
		case 6:
			printf("周六\n");
			break;
		case 7:
			printf("周日\n");
			break;
		default://默认情况下
			printf("输入错误\n");
			break;
	}	
	return 0;
}

/*#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

int main()

{
	int m;

	printf("输入值：\n");
	scanf("%d", &m);

	switch (m)
	{
		case 1:
		case 2:
		case 3:
		case 4:
		case 5://没有输出值和break则表示1-5都为一个break结尾
			printf("工作\n");
			break;
		case 6:
		case 7:
			printf("睡觉\n");
			break;
		default:
			printf("输入错误\n");
			break;
	}
	return 0;
}*/

/*#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

int main()

{
	int a = 1;
	int b = 2;//定义初始赋值

	switch (a)//取a的值
	{
		case 1:
			a++;
		case 2:
			b++;
		case 3:
			a = a + b;
		case 4:
			switch (b)
			{
				case 2:
					a++;
					b++;
				case 3:
					a = a * 2;
					b = b * 2;
					break;
				case 4:
					a++;
					b++;
					break;
			}
			break;
		case 5:
			a = a * 5;
			b = b * 5;
			break;
		default:
			printf("******");
			break;
	}//运算输出结果
	printf("a=%d\nb=%d\n", a, b);//输出结果
	return 0;
}*/
