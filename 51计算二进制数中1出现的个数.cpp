/*#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

int main(void)
{
	int i = 13;//1101
	int j = 0;//0000
	int c = 0;
	int b = 0;
	for (b = 1; b < 32; b++)
	{
		if ((i ^ j) % 2 == 1)
		{
			c++;
		}
		i = i >> 1;
	}
	printf("%d\n", c);
	return 0;
}
*/