#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

int main()
{
	int arr[10] = {1,2,3,4,5,6,7,8,9,10};//建立一个数组arr，空间为10
	char ch[5] = { 'a','b','c','d' };//建立一个字符数组ch，它有五个空间，但只有四个数组元素，剩下一个未赋值的默认为零
	
	//printf("%d\n", arr[0]);//其访问的为第一个数组元素1,并且arr[]中访问输入的值不得大于等于数组元素的个数
	
	int i = 0;
	while (i < 5)//i需小于数组空间
	{
		printf("%d\n", ch[i]);//输出i次
		i++;//i每次循环加一
	}
	return 0;
}
//数组
//数组是通过下标来访问的
