#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

void my_file(int x)
{
	int y = 0;
	for (y = 31; y >= 1; y -= 2)
	{
		printf("%d ", (x >> y) & 1);
	}
	printf("\n");
	for (y = 30; y >= 0; y -= 2)
	{
		printf("%d ", (x >> y) & 1);
	}
	printf("\n");
	for (y = 31; y >= 0; y -= 1)
	{
		printf("%d ", (x >> y) & 1);
	}
}

int main(void)
{
	int i = 15;
	my_file(i);
	return 0;
}
