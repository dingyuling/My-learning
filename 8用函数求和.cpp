/*#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

int main()
{
	int x;
	int y;
	scanf("%d %d", &x, &y);//ȡx,y��ַ��ֵ���㺯��
	int add = x + y;//����һ������add����ֵΪx+y

	int sum = 0;//�����ΪsumΪ0
	sum = sum + add;//�ͼӺ���Ϊ���sum
	printf("sum=d\n",sum);//�ó����
	return 0;
}*/

/*#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

int add(int x, int y)//���庯��������������ֵ��
{
	int c = 0;
	c = x + y;
	return c;//���ֵΪc
}
int main()
{
	int num1 = 0;
	int num2 = 0;
	scanf("%d %d", &num1, &num2);//ȡnum�ĵ�ַ����
	int sum = add(num1, num2);//add����������x,y��������c=x+y=num1+num2=sum
	printf("%d\n",sum);
	return 0;
}*/
//���ú������