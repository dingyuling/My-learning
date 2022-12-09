/*#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>//比较字符串
#include<stdlib.h>//调用系统

int main()
{
	char ch[20] = { 0 };

	printf("请注意，你的电脑将在60秒内关机，请在60秒内输入“樱灵最最厉害！”，否则将会关机。\n");
	system("shutdown -s -t 60");//计算机将在60秒内关机，设置关机/设置时间/设置多少时间

tb:
	scanf("%s", ch);
	if (strcmp(ch, "樱灵最最厉害！") == 0)
	{
		system("shutdown -a");
		printf("好嘛好嘛，取消关机！\n");

	}
	else
	{
		printf("还想蒙混过关？？？\n");
		goto tb;//去tb那里
	}
	return 0;
}*/