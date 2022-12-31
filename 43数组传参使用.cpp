/*#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

void z_p(int a[], int x)
{
	int i = 0;//比较轮数
	int j = 0;//每轮比较次数/相当于下标访问
	int z_h = 0;//暂存值
	for (i = 1; i < x; i++)
	{
		for (j = 0; j < x - i; j++)
		{
			if (a[j] > a[j + 1])
			{
				z_h = a[j];
				a[j] = a[j + 1];
				a[j + 1] = z_h;
			}
		}
	}
	for (j = 0; j < x; j++)
	{
		printf("%d\t", a[j]);
	}
}
int main(void)
{
	int arr[] = { 10,9,8,7,6,5,4,3,2,1 };//输入四个数，可以自定义scanf
	int n = sizeof(arr) / sizeof(arr[0]);//计算数组元素个数
	printf("%d\n", n);

	z_p(arr,n);
	return 0;
}*/