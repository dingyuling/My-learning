/*#define _CRT_SECURE_NO_WARNINGS 1
//��ˣ����ݴ洢�У�С�ֽ����ݷŸߵ�ַλ�����ֽ����ݷŵ͵�ַλ
//С�ˣ����ݴ洢�У�С�ֽ����ݷŵ͵�ַλ�����ֽ����ݷŸߵ�ַλ

#include<stdio.h>

//int main(void)
//{
//	int i = 1;
//	char* p = (char*)&i;
//	//printf("%d\n", a);
//
//	//if (p > p + 1)
//	//{
//	//	printf("���\n");
//	//}
//	//else
//	//{
//	//	printf("С��\n");
//	//}
//	//printf("%p\n", &i);
//	//printf("%p\n", p);
//	//printf("%p\n", p + 1);
//
//	if (*p == 1)
//	{
//		printf("С��\n");
//	}
//	else
//	{
//		printf("���\n");
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
		printf("С��\n");
	}
	else
	{
		printf("���\n");
	}
	return 0;
}
*/