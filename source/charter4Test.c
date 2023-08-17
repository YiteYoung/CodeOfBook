#include "charter4Test.h"

int _1stCode()
{
	printf("Enter a two-dight number:");
	int a, b;
	scanf("%d", &a);
	b = a / 10; //十位
	a = a % 10; //个位
	b = (a * 10) + b;
	printf("The reversal is :%2.2d", b);
	return 1;
}

int _2ndCode()
{
	printf("Enter a three-dight number:");
	int a, b, c;
	scanf("%d", &a);
	b = a / 100; //百位
	c = (a / 10) % 10;  //十位
	a = a % 10;  //个位
	b = (a * 100) + (c * 10) + b;
	printf("The reversal is :%3.3d", b);
	return 1;
}
int _3rdCode()
{
	printf("Enter a three-dight number:");
	int a, b, c;
	scanf("%1d%1d%1d", &a, &b, &c);
	printf("The reversal is %d%d%d", c, b, a);
	return 1;
}

int _4thCode()
{
	printf("Enter a number between 0 and 32767:");
	int a;
	scanf("%d", &a);
	printf("In octal,your number is:%5.5o", a);
	return 1;
}

int _5thCode()
{
	printf("Enter the frist 11 digits of a UPC:");
	int num[11];
	scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &num[0], &num[1], &num[2],
		&num[3], &num[4], &num[5], &num[6], &num[7], &num[8], &num[9], &num[10]);
	int resnum[2] = { 0 };
	for (int i = 0; i < 11; i++)
	{
		int j = 0;
		if (i % 2 == 0)//偶数项累加存放于num[1]
			j = 1;
		resnum[j] += num[i];
	}
	printf("Check digit:%d", 9 - (((3 * resnum[1]) + resnum[0] - 1) % 10));
	return 1;
}

int _6thCode()
{
	printf("Enter the frist 12 digits of a UPC:");
	int num[12];
	scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &num[0], &num[1], &num[2],
		&num[3], &num[4], &num[5], &num[6], &num[7], &num[8], &num[9], &num[10], &num[11]);
	int resnum[2] = { 0 };
	for (int i = 0; i < 12; i++)
	{
		int j = 0;
		if (i % 2 != 0)  //奇数项累加存放于num[1]
			j = 1;
		resnum[j] += num[i];
	}
	printf("Check digit:%d", 9 - (((3 * resnum[1]) + resnum[0] - 1) % 10));
	return 1;
}
