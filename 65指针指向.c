#define _CRT_SECURE_NO_WARNINGS 1
//
#include<stdio.h>


int main(void)
{
	int a = 10;
	int* p = &a;
	*p = 20;
	printf("%p\n", &a);
	printf("%p\n", p);
	printf("%p\n", & *p);
	printf("%p\n", &p);
	printf("%d\n", a);
	return 0;
}


/*
int main(void)
{
	int a = 0x11223344;
	printf("%d\n", a);
	int b = 0x0011223344;
	printf("%d\n", b);
	int c = 0x211223344;//整形四个字节，每位4个16进制位，从右向左写入内存空间
	printf("%d\n", c);
	int d = 0x000000C1666FF8C4;//64位16进制
	printf("%d\n", d);//内存截断
	return 0;
}
*/

/*
int main(void)
{
	int a = 0x11223344;
	int* p = &a;
	*p = 0;//监视内存可见变化

	int b = 0x11223344;
	char* pb = &b;
	*pb = 0;//监视内存可见变化,调整为c源可看，c++不支持转变

	return 0;
}
*/

/*
int main(void)
{
	int arr[] = { 0 };
	int* p = arr;
	printf("%p\n", p);
	printf("%p\n", arr);
	printf("%p\n", p + 1);
	char* pa = arr;
	printf("%p\n", pa);
	printf("%p\n", pa + 1);//访问的只是单个整形数组元素的4个字节中的其中一个字节
	return 0;
}
*/

/*
int main(void)
{
	int arr[10] = { 0 };
	int* p = arr;
	for (int i = 0; i < 10; i++)
	{
		*(p + i) = 1;
		printf("%d\t", arr[i]);
		printf("%p\n", p + i);
	}
	return 0;
}
*/

/*
int main(void)
{
	int arr[10] = { 0 };
	char* p = arr;
	int j = 0;
	for (int i = 0; i < 10; i++)
	{
		*(p + i) = 1;
		printf("%d\t", arr[i]);
		printf("%d\n", arr[j]);
		j++;
	}
	for (j = 0; j < 10; j++)
	{
		printf("%d\n", arr[j]);
	}
	return 0;
}
*/
