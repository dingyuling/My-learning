#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

int main(void)
{
	int i = 1;
	do {
		printf("%d\n", i++);
	} while (i--);
	return 0;
}//死循环
