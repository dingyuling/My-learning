/*#define _CRT_SECURE_NO_WARNINGS 1
//实现函数init()初始化为零
//实现函数print()打印数组的每个元素
//实现函数reverse()数组的逆序
#include<stdio.h>

void init(int arr[], int i)
{
	int j = 0;
	for (j = 0; j < i; j++)
	{
		arr[j] = 0;
	}
}

void print(int arr[], int i)
{
	int j = 0;
	for (j = 0; j < i; j++)
	{
		printf("%d  ", arr[j]);
	}
	printf("\n");
}

void reverse(int arr[], int i)
{
	int l = 0;
	int r = i - 1;
	int a;
	while (l < r)
	{
		a = arr[l];
		arr[l] = arr[r];
		arr[r] = a;
		l++;
		r--;
	}
}

int main(void)
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int i = sizeof(arr) / sizeof(arr[0]);
	print(arr, i);
	reverse(arr, i);
	print(arr, i);
	init(arr, i);
	print(arr, i);
	return 0;
}
*/