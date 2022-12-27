#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

int main(void)
{
	int arr[3][4] = { 0 };//数组元素是以下标来访问的，这是重点，3,4表示这个数组是3行4列，访问时还是从0开始
	printf("%d\n", arr[0][1]);
	return 0;
}//访问单个数组元素


/*int main(void)
{
	int arr[][4] = { {1,2} ,{3,4} ,{5,6} };
	int h = sizeof(arr) / sizeof(arr[0]);
	int g = sizeof(arr) / sizeof(arr[0][0]);
	printf("%d\n", h);//计算几行
	printf("%d\n", g);//计算有几个数据元素
	return 0;
}//计算
*/

/*int main(void)
{
	int arr[3][4] = { 0 };
	int i = 0;
	int j = 0;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 4; j++)
		{
			printf("%d\t", arr[i][j]);
		}
		printf("\n");
	}	
	return 0;
}//打印数组元素
*/

/*int main(void)
{
	int arr[][4] = { {1,2} ,{3,4} ,{5,6} };
	int h = sizeof(arr) / sizeof(arr[0]);
	int g = sizeof(arr) / sizeof(arr[0][0]);
	printf("%d\n", h);//计算几行
	printf("%d\n", g);//计算有几个数据元素
	int i = 0;
	int j = 0;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 4; j++)
		{
			printf("%d\t", arr[i][j]);//打印出每一数据元素
		}
		printf("\n");
	}
	return 0;
}//运用
*/

/*int main(void)
{
	int arr[3][4] = { 1,2,3,4,5,6,7,8,9,10,11,12 };
	//数组元素是以下标来访问的，这是重点，3,4表示这个数组是3行4列，访问时还是从0开始，3*4表示有12个数组元素
	int i = 0;
	int j = 0;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 4; j++)
		{
			printf("arr[%d][%d]=%d\t", i, j, arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}//数组下标
*/

/*int main(void)
{
	int arr[3][4] = { 1,2,3,4,5,6,7,8,9,10,11,12 };
	//数组元素是以下标来访问的，这是重点，3,4表示这个数组是3行4列，访问时还是从0开始，3*4表示有12个数组元素
	int i = 0;
	int j = 0;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 4; j++)
		{
			printf("arr[%d][%d]=%p\t", i, j, &arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}//地址计算
*/

/*int main(void)
{
	int arr[3][4] = { 1,2,3,4,5,6,7,8,9,10,11,12 };
	//数组元素是以下标来访问的，这是重点，3,4表示这个数组是3行4列，访问时还是从0开始，3*4表示有12个数组元素
	int* p = &arr[0][0];
	int i = 0;
	for (i = 0; i < 12; i++)
	{
		printf("%d = %d = %p\n", i, *p, p);
		(*p)++;
	}
	return 0;
}//数组地址连续指针访问
*/
