//#define _CRT_SECURE_NO_WARNINGS 1

//#include<stdio.h>

/*
int main(void)
{
	char i = 1;
	//00000001
	//00000000000000000000000000000001
	char j = 127;
	//01111111
	//00000000000000000000000001111111
	char a = i + j;
	//00000000000000000000000010000000
	//10000000
	//11111111
	//10000000
	printf("%d\n", a);//%d整形运算，需要再次转换
	//11111111111111111111111110000000
	//11111111111111111111111101111111
	//10000000000000000000000010000000

	return 0;
}
*/

/*
int main(void)
{
	char a = 0xb6;
	printf("%d\n", 0xb6);
	short b = 0xb600;
	printf("%d\n", 0xb600);
	int c = 0xb6000000;
	printf("%d\n", 0xb6000000);

	printf("%d\n", a); 
	printf("%d\n", b); 
	printf("%d\n", c);

	if (a == 0xb6)
	{
		printf("a");
	}
	if (b == 0xb600)
	{
		printf("b");
	}
	if (c == 0xb6000000)
	{
		printf("c");
	}
	return 0;
}
*/

/*
int main(void)
{
	char i = 1;
	printf("%d\n", unsigned(sizeof(i)));
	printf("%d\n", unsigned(sizeof(+i)));
	printf("%d\n", unsigned(sizeof(-i)));
	printf("%d\n", unsigned(sizeof(!i)));//编译器问题
	return 0;
}
*/