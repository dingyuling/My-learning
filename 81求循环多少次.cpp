#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

int i = 0;
int j = 0;

int main(void)
{
	int count = 0;

	for (i = 0, j = 0; i = 1 && j < 4; j++)
	{
		count++;
	}
	printf("%d\n", count);
	return 0;
}//4
