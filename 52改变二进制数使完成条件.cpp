/*#define _CRT_SECURE_NO_WARNINGS 1
//13,01101��Ϊ11101
#include<stdio.h>
int main(void)
{
	int i = 13;
	int j = 1;//00001
	j = j << 4;//10000
	i = i | j;
	printf("%d\n", i);
	//���Ļ���
	i = i ^ j;
	printf("%d\n", i);
	j = ~j;
	i = i & j;
	printf("%d\n", i);
	return 0;
}
*/
