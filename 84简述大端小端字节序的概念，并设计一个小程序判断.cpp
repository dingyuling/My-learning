/*#define _CRT_SECURE_NO_WARNINGS 1
//大端，数据存储中，小字节数据放高地址位，大字节数据放低地址位
//小端，数据存储中，小字节数据放低地址位，大字节数据放高地址位

#include<stdio.h>

//int main(void)
//{
//	int i = 1;
//	char* p = (char*)&i;
//	//printf("%d\n", a);
//
//	//if (p > p + 1)
//	//{
//	//	printf("大端\n");
//	//}
//	//else
//	//{
//	//	printf("小端\n");
//	//}
//	//printf("%p\n", &i);
//	//printf("%p\n", p);
//	//printf("%p\n", p + 1);
//
//	if (*p == 1)
//	{
//		printf("小端\n");
//	}
//	else
//	{
//		printf("大端\n");
//	}
//	return 0;
//}

int my_file()
{
	int i = 1;
	char* p = (char*)&i;
	return *p;
}

int main(void)
{
	int a = my_file();

	if (a == 1)
	{
		printf("小端\n");
	}
	else
	{
		printf("大端\n");
	}
	return 0;
}
*/