#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
int main()

{
	int i = 1;
	for (i = 1; i <= 10; i++)
	{
		if (i == 5)
		{
			break;
			//continue;
		}
		printf("%d\n", i);
	}
	return 0;
}

/*#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
int main()
{
	int i = 1;
	while (i <= 10)
	{
		if (i == 5)
		{
			//break;
			continue;
		}
		printf("%d\n", i);
		i++;
	}
	return 0;
}*/

/*#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
int main()
{
	int i = 1;
	do
	{
		if (i == 5)
		{
			break;
			//continue;
		}
		printf("%d\n", i);
		i++;
	} while (i <= 10);

	return 0;
}*/
