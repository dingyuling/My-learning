/*#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>
#include<assert.h>

//int main(void)
//{
//	char ch1[20] = "dingyuling";
//	char ch2[] = "hyl..";
//	strcpy(ch1, ch2);
//	printf("%s\n", ch1);
//
//	return 0;
//}

//char my_strcpy(char* c, char* a)
//{
//	int l = 0;
//	int x = strlen(a);
//	for (l = 0; l <= x; l++)
//	{
//		c[l] = a[l];
//	}
//	return *c;
//}

//void my_strcpy(char* c, const char* a)
//{
//	assert(a != NULL);
//	assert(c != NULL);
//	while (*c++ = *a++)
//	{
//		;
//	}
//}

char* my_strcpy(char* c, const char* a)
{
	assert(a != NULL);
	assert(c != NULL);
	char* ch = c;
	while (*c++ = *a++)
	{
		;
	}
	return ch;
}

int main(void)
{
	char ch1[20] = "dingyuling";
	char ch2[] = "hyl..";
	my_strcpy(ch1, ch2);
	printf("%s\n", ch1);

	return 0;
}
*/