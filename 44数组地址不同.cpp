/*#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

int main(void)
{
	int arr[10] = { 0 }; 
	int x = sizeof(arr);
	printf("x = %d\n", x);

	printf("%p 数组名地址\n", arr);
	printf("%p 数组名地址+1\n", arr + 1);//4个字节
	printf("%p 数组第一个元素地址\n", &arr[0]);
	printf("%p 数组第二个元素地址\n", &arr[1]);
	printf("\n");
	printf("%p 整个数组的地址\n", &arr);
	printf("\n");
	for (int i = 0; i <= 10; i++)
	{
		if (i == 10)
		{
			printf("\n");
			printf("arr[%d]=%p\n", i, &arr[i]);
		}
		else
		{
			printf("arr[%d]=%p\n", i, &arr[i]);
		}
	}
	printf("\n");
	printf("%p 整个数组地址+1\n", &arr + 1);//40个字节
	return 0;
}

//两个例外情况：
//sizeof(数组名)-计算数组的长度，数组元素的个数-单位字节
//&数组名-表示整个数组-取出整个数组地址

*/