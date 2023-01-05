//#define _CRT_SECURE_NO_WARNINGS 1

//#include<stdio.h>

/*
int main(void)
{
	int i = 1;
	int j = 1;
	int x = 1;
	int y = 1;
	int c = 0;
	int b = 0;
	c = i++ + j++;
	b = ++x + ++y;
	printf("c = %d\n", c);
	printf("b = %d\n", b);
	return 0;
}//加+
*/

/*
int main(void)
{
	int i = 10;
	int j = 1;
	int x = 10;
	int y = 1;
	int c = 0;
	int b = 0;
	c = i-- - j--;
	b = --x - --y;
	printf("c = %d\n", c);
	printf("b = %d\n", b);
	return 0;
}//减-
*/

/*
int main(void)
{
	int i = 1;
	int j = 2;
	int c = 0;
	c = i * j;
	printf("c = %d\n", c);
	return 0;
}//乘*
*/

/*
int main(void)
{
	int i = 1;
	int j = 2;
	int c = 0;
	c = i / j;
	printf("c = %d\n", c);//整数1/2在计算机中为0

	float x = 1.0;//必须加.0，/两边至少有一个为float类型的数据
	int  y = 2;
	float b = 0;
	b = x / y;
	printf("b = %f\n", b);
	printf("b = %.1f\n", b);//保留小数点后1位有效数字
	return 0;
}//除/
*/

/*
int main(void)
{
	int i = 0;
	int j = 2;
	int c = 0;
	c = i % j;
	printf("c = %d\n", c);//0/任何数都为0，则无模可取
	printf("\n");

	int i1 = 1;
	int j1 = 2;
	int c1 = 0;
	c1 = i1 % j1;
	printf("c1 = %d\n", c1);//1模任何数都为它本身
	printf("\n");

	int i2 = 5;
	int j2 = 8;
	int j3 = 9;
	int j4 = 10;
	int c2 = 0;
	int c3 = 0;
	int c4 = 0;
	c2 = i2 % j2;
	c3 = i2 % j3;
	c4 = i2 % j4;
	printf("c2 = %d\n", c2);
	printf("c3 = %d\n", c3);
	printf("c4 = %d\n", c4);//模比自身小的数结果为它本身
	printf("\n");

	int x = 5;
	int y = 2;
	int b = 0;
	b = x % y;
	printf("b = %d\n", b);//商2余1则取余数则为模数
	int x1 = 5;
	int y1 = 2;
	int b1 = 0;
	b1 = x1 % y1 + 1;
	printf("b1 = %d\n", b1);//取模+1
	return 0;
}//取模%
*/