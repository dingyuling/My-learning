//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//移动的是(二进制)位

/*
int main(void)
{
	//整形4字节32比特位，计算方式为2的次方
	int i = 0;
	//00000000000000000000000000000000
	int j = 1;
	//00000000000000000000000000000001
	int m = -1;
	//原码：10000000000000000000000000000001
	//反码：11111111111111111111111111111110
	//补码：11111111111111111111111111111111，反码+1
	int x = 10;
	//00000000000000000000000000001010
	int y = 0;
	//00000000000000000000000000000000
	y = i << 1;
	printf("y1 = %d\n", y);//补0还为0
	y = j << 1;
	printf("y2 = %d\n", y);
	y = m << 1;
	printf("y3 = %d\n", y);
	y = x << i;
	printf("y4 = %d\n", y);
	return 0;
}//左移<<
*/

/*
int main(void)
{
	//整形4字节32比特位，计算方式为2的次方
	int i = 0;
	//00000000000000000000000000000000
	int j = 1;
	//00000000000000000000000000000001
	int m = -1;
	//原码：10000000000000000000000000000001
	//反码：11111111111111111111111111111110
	//补码：11111111111111111111111111111111，反码+1
	int y = 0;
	//00000000000000000000000000000000
	int x = 10;
	//00000000000000000000000000001010
	y = i >> 1;
	printf("y1 = %d\n", y);//补0还为0
	y = j >> 1;
	printf("y2 = %d\n", y);//1舍去前补0
	y = m >> 1;
	printf("y3 = %d\n", y);//算数右移，左边补原符号位
	y = x >> 1;
	printf("y4 = %d\n", y);
	return 0;
}//右移>>
*/