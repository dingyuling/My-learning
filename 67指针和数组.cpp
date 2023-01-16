//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>

/*
int main(void)
{
	int arr[10] = { 0 };
	int* p = arr;
	int j = 0;
	for (int i = 0; i < 10; i++)
	{
		*(p + i) = i + 1;
		printf("%d\t", arr[i]);
	}
	printf("\n");
	for (j = 0; j < 10; j++)
	{
		printf("%d\t", arr[j]);
	}
	return 0;
}
*/

/*
int main(void)
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int* p = arr;//arr[2] == *(arr + 2) == *(2 + arr) == *(p + 2) = *(2 + p)
	printf("%d\n", arr[2]);
	printf("%d\n", *(arr + 2));
	printf("%d\n", *(2 + arr));
	printf("%d\n", *(p + 2));
	printf("%d\n", *(2 + p));
	printf("%d\n", 2[arr]);
	printf("%d\n", 2[p]);
	printf("%d\n", p[2]);
	return 0;
}//×ª»»
*/