#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
//#include<string.h>//计算引用strlen
#include<windows.h>//时间Sleep

int main()
{
	char ch1[] = { "The world is not beautiful" };
	char ch2[] = { "**************************" };//两段字符串

	int l = 0;//左边地址为1
	int z = sizeof(ch1) / sizeof(ch1[0]);
	//int i = strlen(ch1 - 1);//计算有多少个字符
	int r = z - 1;
	//int r = i - 1;//右边地址
	printf("%d\n", z);
	//printf("%d\n", i);//计算

	while (l <= r)
	{
		ch2[l] = ch1[l];
		ch2[r] = ch1[r];//两段字符串的字符替换
		
		printf("  %s\n", ch2);//输出ch2

		Sleep(1000);//单位毫秒
		system("cls");//清空屏幕

		l++;//地址位+1
		r--;//-1
	}
	
	printf("  %s\n", ch2);//最后输出，不然屏幕空白

	return 0;
}
