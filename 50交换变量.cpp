//#define _CRT_SECURE_NO_WARNINGS 1
//������������int��ֵ������ʹ�õ���������a=3,b=5������a=5,b=3
//#include<stdio.h>
//
//static int a = 3;
//static int b = 5;

/*
int main(void)
{
	int c = 0;
	c = a;
	a = b;
	b = c;
	printf("a = %d\tb = %d\n", a, b);
	return 0;
}
*/

/*
int main(void)
{
	a = a + b;
	b = a - b;
	a = a - b;
	printf("a = %d\tb = %d\n", a, b);
	return 0;
}
*/

/*
int main(void)
{
	//00000000000000000000000000000011,3
	//00000000000000000000000000000101,5
	a = a ^ b;
	b = a ^ b;
	a = a ^ b;
	printf("a = %d\tb = %d\n", a, b);
	return 0;
}
*/