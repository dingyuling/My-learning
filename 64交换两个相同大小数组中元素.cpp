#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

int main(void)
{
	int arr1[] = { 1,2,3,4,5 };
	int arr2[] = { 6,7,8,9,10 };

	int i = sizeof(arr1) / sizeof(arr1[0]);
	for (int j = 0; j < i; j++)
	{
		int a = arr1[j];
		arr1[j] = arr2[j];
		arr2[j] = a;
		printf("arr1[%d] = %d\tarr2[%d] = %d\n", j, arr1[j], j, arr2[j]);
	}	
	return 0;
}
