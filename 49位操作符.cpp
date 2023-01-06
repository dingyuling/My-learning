#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>


int main(void)
{
	//整形4字节32比特位，计算方式为2的次方
	int i = 0;
	//00000000000000000000000000000000
	int j = 1;
	//00000000000000000000000000000001
	int n = 2;
	//00000000000000000000000000000010
	int m = -1;
	//原码：10000000000000000000000000000001
	//反码：11111111111111111111111111111110
	//补码：11111111111111111111111111111111，反码+1
	int x = 10;
	//00000000000000000000000000001010
	int y = 0;
	//00000000000000000000000000000000
	y = n & j;
	printf("y1 = %d\n", y);//相同为本身，相异为0
	y = i & m;
	printf("y2 = %d\n", y);
	y = i & j;
	printf("y3 = %d\n", y);//0与任何数都为0
	y = n & x;
	printf("y4 = %d\n", y);
	y = m & x;
	printf("y5 = %d\n", y);//-1与任何数为数本身
	return 0;
}//与&


/*
int main(void)
{
	//整形4字节32比特位，计算方式为2的次方
	int i = 0;
	//00000000000000000000000000000000
	int j = 1;
	//00000000000000000000000000000001
	int n = 2;
	//00000000000000000000000000000010
	int m = -1;
	//原码：10000000000000000000000000000001
	//反码：11111111111111111111111111111110
	//补码：11111111111111111111111111111111，反码+1
	int x = 10;
	//00000000000000000000000000001010
	int y = 0;
	//00000000000000000000000000000000
	y = n | j;
	printf("y1 = %d\n", y);//相同为本身，相异为1
	y = i | m;
	printf("y2 = %d\n", y);
	y = i | j;
	printf("y3 = %d\n", y);//0或任何数都为数本身
	y = n | x;
	printf("y4 = %d\n", y);
	y = m | x;
	printf("y5 = %d\n", y);//-1与任何数都为-1
	return 0;
}//或|
*/

/*
int main(void)
{
	//整形4字节32比特位，计算方式为2的次方
	int i = 0;
	//00000000000000000000000000000000
	int j = 1;
	//00000000000000000000000000000001
	int n = 2;
	//00000000000000000000000000000010
	int m = -1;
	//原码：10000000000000000000000000000001
	//反码：11111111111111111111111111111110
	//补码：11111111111111111111111111111111，反码+1
	int x = 10;
	//00000000000000000000000000001010
	int y = 0;
	//00000000000000000000000000000000
	y = n ^ j;
	printf("y1 = %d\n", y);//相同为0，相异为1
	y = i ^ m;
	printf("y2 = %d\n", y);
	y = i ^ j;
	printf("y3 = %d\n", y);//0任何数都为数本身
	y = n ^ x;
	printf("y4 = %d\n", y);
	y = m ^ x;
	printf("y5 = %d\n", y);
	return 0;
}//异或^
*/
