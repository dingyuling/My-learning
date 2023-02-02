/*#define _CRT_SECURE_NO_WARNINGS 1
//三步翻转法
//1.整个字符串
//2.每个单词
#include<stdio.h>
#include<string.h>

void reversal(char* left, char* right)
{
	while (left < right)
	{
		char min = 0;
		min = *left;
		*left = *right;
		*right = min;
		left++;
		right--;
	}
}

int main(void)
{
	//char ch1[] = "hello world!";
	char ch2[100] = { 0 };
	//printf("%s\n", ch1);
	gets_s(ch2);

	int length = int(strlen(ch2));

	reversal(ch2, ch2 + length - 1);
	//printf("%s\n", ch2);

	char* str = ch2;
	while (*str)
	{
		char* end = str;
		while (* end != ' ' && * end != '\0')
		{
			end++;
		}
		reversal(str, end - 1);
		if (*end == ' ')
		{
			str = end + 1;
		}
		else
		{
			str = end;
		}
	}
	printf("%s\n", ch2);
	return 0;
}
*/