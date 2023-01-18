/*#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

struct xin_xi
{
	char ri_qi[20];
	int yie_shu;
	char zuo_zhe[20];
};

struct book
{
	struct xin_xi;
	char name[20];
	int price;
	char numbering[20];
};

void printf1(struct book a1)
{
	printf("%s %d %s %s %d %s\n", a1.ri_qi, a1.yie_shu, a1.zuo_zhe, a1.name, a1.price, a1.numbering);
}

void printf2(struct book* a1)
{
	printf("%s %d %s %s %d %s\n", a1->ri_qi, a1->yie_shu, a1->zuo_zhe, a1->name, a1->price, a1->numbering);
}

int main(void)
{
	struct book a = { {"20230117",1453,"¶¡ÓôÁé"},"Github'book",20,"202301171456" };
	printf("%s\n", a.ri_qi);
	printf("%d\n", a.yie_shu);
	printf("%s\n", a.zuo_zhe);
	printf("%s\n", a.name);
	printf("%d\n", a.price);
	printf("%s\n", a.numbering);

	printf("\n");

	struct book* pa = &a;
	printf("%s\n", (*pa).ri_qi);
	printf("%d\n", (*pa).yie_shu);
	printf("%s\n", (*pa).zuo_zhe);
	printf("%s\n", (*pa).name);
	printf("%d\n", (*pa).price);
	printf("%s\n", (*pa).numbering);

	printf("\n");

	printf("%s\n", pa->ri_qi);
	printf("%d\n", pa->yie_shu);
	printf("%s\n", pa->zuo_zhe);
	printf("%s\n", pa->name);
	printf("%d\n", pa->price);
	printf("%s\n", pa->numbering);

	printf("\n");

	printf1(a);
	printf("\n");
	printf2(&a);

	return 0;
}
*/