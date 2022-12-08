/*#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

int main()
{
	int RUN = 0;//闰年

	int g = 0;//个数

	printf("闰年有：\n");

	for (RUN = 1000; RUN <= 2000; RUN++)
	{
		if (RUN % 4 == 0 && RUN % 100 != 0 || RUN % 400 == 0)
			//闰年的条件是:一:能被4整除，但不能被100整除的年份(例如2008是闰年，1900不是闰年)
						//二:能被400整除的年份(例如2000年)也是闰年
		{
			printf("%d年\t", RUN);
			g++;
		}
	}
	printf("\n");
	printf("闰年有%d个\n", g);

	return 0;
}*/