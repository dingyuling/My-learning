#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>

void y_1()
{
	printf("命运\n");
}
void y_2()
{
	return y_1();
}
void y_3()
{
	return y_2();
}//自定义三个函数

int main()
{
	y_3();//输出

	return 0;
}


/*int y_4(int* x)
{
	*x = 50;
	return *x;
}

int main()
{
	int y = 0;
	y_4(&y);//实参改变需取地址
	printf("%d", printf("%d", printf("%d", printf("%d", y))));//嵌套使用
	//输出结果，如果printf打印出整数，则下一个printf就会打印出屏幕上数字的个数
	return 0;
}*/

/*int main()
{
	char ch1[20] = { 0 };//空数组
	char ch2[] = "hello";//一个字符串

	strlen(ch2);//计算字符串长度
	printf("%s %s\n", ch1, ch2);

	strcpy(ch1, ch2);//打印

	printf("%s\n", ch1);
	return 0;
}*/

/*char b_j(char* x, char* y)
{
	char *a = x;//定义一个地址变量，因为函数的生命周期是函数本身，将y取x的值赋给地址a
	while ((*x++ = *y++) != '\0');//因为字符串后面默认带\0，所以不等于\0，地址加一赋值
	return *a;//输出字符串地址a
}

int main(void)
{
	char ch1[20] = { 0 };//空数组
	char ch2[] = "hello";//一个字符串

	strlen(ch2);//计算字符串长度
	printf("%s %s\n", ch1, ch2);

	b_j(ch1, ch2);
	//strcpy(ch1, ch2);//打印

	printf("%s\n", ch1);
	return 0;
}*/
