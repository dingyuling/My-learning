#define _CRT_SECURE_NO_WARNINGS 1
//const
#include<stdio.h>
#include<string.h>//strlen
#include<assert.h>//assert

int my_strlen(const char* ch1)
{
	assert(ch1!=NULL);
	int a = 0;
	while (ch1[a] != '\0')
	{
		a++;
	}
	return a;
}

int main(void)
{
	char ch[] = "hello,dyl!";
	printf("%d\n", int(strlen(ch)));
	printf("%d\n", int(my_strlen(ch)));
	return 0;
}
