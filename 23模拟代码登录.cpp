/*#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>
#include<Windows.h>

int main()

{
	int i = 0;//次数
	char ch[10] = { 0 };//数组
	

	for (i = 0; i < 5; i++)//循环5次
	{
		printf("请输入你的代码：\n");
		scanf("%s", ch);//取字符串ch

		if (strcmp(ch, "258369") == 0)//strcmp比较函数
		{
			printf("成功，正在进入...\n");
			break;//正确则跳出循环
		}
		else
		{
			printf("失败，请重新输入。\n");//失败继续循环，直到循环结束
		}
	}
	if (i == 5)//失败五次
	{
		printf("错误超过五次，冻结，请5min后重新尝试！");
		Sleep(300000);
	}
	return 0;
}*/