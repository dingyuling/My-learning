//#define _CRT_SECURE_NO_WARNINGS 1

//#include<stdio.h>

/*
int main(void)
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	printf("%d\n", arr[1]);//访问下标为一的
	return 0;
}
*/

/*
int sum(int a, int b)
{
	return a + b;
}

int main(void)
{
	int i = 1;
	int y = 2;
	printf("%d\n", sum(i, y));
	return 0;
}
*/

/*
struct student
{
	char name[20];
	char Student_number[20];
	int age;
};

int main(void)
{
	struct student a1 = { "dingyuling","20230112a1",19 };

	printf("name:%s\n", a1.name);
	printf("Student_number:%s\n", a1.Student_number);
	printf("age:%d\n", a1.age);

	struct student* pb = &a1;
	printf("name:%s\n", (*pb).name);
	printf("Student_number:%s\n", (*pb).Student_number);
	printf("age:%d\n", (*pb).age);//地址调用

	printf("name:%s\n", pb->name);
	printf("Student_number:%s\n", pb->Student_number);
	printf("age:%d\n", pb->age);//指向
	return 0;
}
*/