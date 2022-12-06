#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

int main()

{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };//定义一个数组
	int a = 0;//取的数
	scanf("%d", &a);//取a的地址
	int s = sizeof(arr) / sizeof(arr[0]);//计算有几个数据元素

	int l = 0;//left左边
	int r = s - 1;//right右边，数组地址从0开始-1
	while (l <= r)//循环条件
	{
		int z = (l + r) / 2;//中间值的地址

		if (arr[z] < a)//a在右边
		{
			l = z + 1;//r不变，l的地址为中间值的地址+1
		}
		else if (arr[z] > a)//左边
		{
			r = z - 1;//l不变，r-1
		}
		else
		{
			printf("查找结束  %d\n", z);//没有可找的了，结束了
			break;
		}
	}
	if (l > r)//左边地址大于右边
	{
		printf("无法查找\n");//其他情况
	}
	return 0;
}
