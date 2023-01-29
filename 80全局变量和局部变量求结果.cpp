#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

int i = 1;

//void test()
//{
//	int i = 1;
//	i += 1;
//}

void test()
{
	i = ++i;
	i += 1;
}

int main(void)
{
	test();
	printf("%d\n", i);
	return 0;
}
