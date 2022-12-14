#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
/*
int main(void)
{
	int arr[10] = { 2,9,6,4,10,3,8,7,5,1 };//自定义数组，也可scanf自定义

	int c = 0;
	int max = 0;//最大值
	int x = 0;//相当于下标
	int h = 0;//暂存值

	for (c = 1; c < 10; c++)//10个数比较9轮
	{
		for (x = 0; x < 10 - c; x++)//相当于下标，为什么有九个数下标只有八个，因为if语句中x+1相当于访问了最后一位数的下标
		{							//因为之前几轮中已经把最大值换算到了左边，所以之后几轮不用访问就知道右边是最小值，所以10-c省去多余计算，让它只判断未比较过的值
			if (arr[x] < arr[x + 1])
			{
				if (max < arr[x + 1])//if语句判断最大值
				{
					max = arr[x + 1];
				}

				h = arr[x + 1];
				arr[x + 1] = arr[x];
				arr[x + 1] = h;
			}
		}
	}
	printf("%d\n", max);
	return 0;
}//麻烦，只可计算正数，如果计算负数则max初始值0就是最大的了，要计算也可以，最开始把max赋值为数组中的某一元素，让他们相比较
*/


int main(void)
{
	int arr[10] = { -3,-5,-8,-7,-4,-1,-2,-6,-10,-9 };//自赋初始值scanf

	int max = arr[0];//初始赋值数组中某一元素，也可以比较负数
	int x = 0;//下标

	for (x = 0; x < 10; x++)//下标从零开始，十个数跟max比10次
	{
		if (arr[x] > max)//比较
		{
			max = arr[x];
		}
	}
	printf("%d\n", max);
}
