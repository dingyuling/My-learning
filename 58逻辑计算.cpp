/*#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

int main(void)
{
	int i = 0, j = 0, a = 2, b = 3, c = 4;
	//j = j++ && ++a && c++;//为假不计算
	j = j++ || ++a || c++;//为真不计算
	printf("j = %d\na = %d\nb = %d\nc = %d\n", j, a, b, c);
	return 0;
}
*/