#define _CRT_SECURE_NO_WARNINGS 

#include<stdio.h>

int main()
{
	int a = 10;
	printf("%d\n", sizeof(int));//计算int大小
	printf("%d\n", sizeof(a));//计算a大小，因为a是由int决定类型，所以sizeof(a)也可以计算出int大小
	printf("%d\n", sizeof(char));
	return 0;
}

/*#include<stdio.h>

int main()
{
	int arr[10] = { 0 };//10个元素
	//int占比四字节
	printf("%d\n", sizeof(arr));//这个数组叫arr，计算arr不加[]

	printf("%d\n", sizeof(arr[0]));//计算单个数据元素的大小

	int num = sizeof(arr) / sizeof(arr[0]);//定义一个空值计算有几个数据元素

	printf("%d\n", num);

	return 0;
}*/

//计算数据类型大小
