#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

int multiply(int m)
{
	if(m != 0)
	{
		int w = 1;
		int q = 0;
		for (q = 1; q <= m; q++)
		{
			w *= q;
		}
		return w;
	}
	else
	{
		return 0;
	}
}

int begin(int c)
{
	int d = 0;
	int s = 0;
	for (c; c >= 0; c--)
	{
		d = multiply(c);
		s += d;
	}
	return s;
}

int main(void)
{
	int x = 0;
	printf("Please enter\t");
	scanf("%d\n", &x);  

	int sum = 0;
	sum = begin(x);
	printf("%d\n", sum);
	return 0;
}
