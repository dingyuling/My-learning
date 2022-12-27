#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

int main(void)
{
	int arr[10] = { 0 };
	printf("%d\n", arr[0]);
	return 0;
}//单个调用


/*int main(void)
{
	int arr[10] = { 0 };
	int i = sizeof(arr) / sizeof(arr[0]);
	printf("%d\n", i);
	return 0;
}//计算有几个数组元素
*/

/*int main(void)
{
	int arr[10] = { 0 };
	int i = sizeof(arr) / sizeof(arr[0]);
	printf("%d\n", i);//计算有几个数组元素

	int c = 0;
	for (c = 0; c < i; c++)
	{
		printf("%d\t", arr[c]);
	}
	return 0;
}//输出整个数组中的数组元素
*/

/*int main(void)
{
	int arr[10];
	int i = sizeof(arr) / sizeof(arr[0]);
	printf("%d\n", i);//计算有几个数组元素

	int c = 0;
	for (c = 0; c < i; c++)
	{
		printf("%d\t", arr[c]);
	}
	return 0;
}//计算机自定义赋值
*/

/*int main(void)
{
	int arr[10] = { 0 };
	int i = sizeof(arr) / sizeof(arr[0]);
	printf("%d\n", i);//计算有几个数组元素

	int c = 0;
	for (c = 0; c < i; c++)
	{
		if (c == 6)
		{
			arr[c] = 7;
		}
		printf("%d\t", arr[c]);
	}
	return 0;
}//单个值
*/

/*int main(void)
{
	int arr[10] = { 0 };
	int i = sizeof(arr) / sizeof(arr[0]);
	printf("%d\n", i);//计算有几个数组元素

	int c = 0;
	for (c = 0; c < i; c++)
	{
		if (c > 0)
		{
			arr[c] = arr[c - 1] + 1;
			printf("%d\t", arr[c]);
		}	
		else
		{
			arr[c]++;
			printf("%d\t", arr[c]);
		}
	}
	return 0;
}//每个数组元素++
*/

/*int main(void)
{
	int arr[10] = { 0 };
	int i = sizeof(arr) / sizeof(arr[0]);
	printf("%d\n", i);//计算有几个数组元素

	int c = 0;
	for (c = 0; c < i; c++)
	{
		printf("%p\n", &arr[c]);
	}
	return 0;
}//计算16进制位置，注意32位和64位地址大小不同
*/

/*int main(void)
{
	int arr[10] = { 0 };
	int i = sizeof(arr) / sizeof(arr[0]);
	printf("%d\n", i);//计算有几个数组元素
	int* p = &arr[0];
	int c = 0;
	for (c = 0; c < i; c++)
	{
		printf("%p = %p\n", p, &arr[c]);
	}
	return 0;
}//计算16进制位置，注意32位和64位地址大小不同
*/

/*int main(void)
{
	printf("%d\n", 0x16);//计算
	printf("%x\n", 0x16);//直接打印
	printf("%p\n", 0x16);//16进制位完全打印
	return 0;
}//不同变化
*/
