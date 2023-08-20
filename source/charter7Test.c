#include "charter7Test.h"

int _1stCode()
{
	int i, n;
	printf("Enter number of entries in table(int):");
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		printf("%d %d\n", i, i * i);
	}
	short int j, m;
	printf("Enter number of entries in table(short):");
	scanf("%hd", &m);
	for (j = 1; j <= m; j++)
	{
		printf("%hd %hd\n", j, j * j);
	}
	long int k, l;
	printf("Enter number of entries in table(long):");
	scanf("%ld", &l);
	for (k = 1; k <= l; k++)
	{
		printf("%ld %ld\n", k, k * k);
	}
	return 1;
}

int _2ndCode()
{
	int i, n;
	printf("Enter number of entries in table(int):");
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		printf("%d %d\n", i, i * i);
		if (i % 24 == 0)
			if (getchar())
				continue;
	}
	return 1;
}

int _3rdCode()
{
	return 1;
}

int _4thCode()
{
	return 1;
}

int _5thCode()
{
	return 1;
}

int _6thCode()
{
	return 1;
}

int _7thCode()
{
	return 1;
}

int _8thCode()
{
	return 1;
}

int _9thCode()
{
	return 1;
}

int _10thCode()
{
	return 1;
}

int _11stCode()
{
	return 1;
}

int _12ndCode()
{
	return 1;
}

int _13rdCode()
{
	return 1;
}

int _14thCode()
{
	return 1;
}

int _15thCode()
{
	return 1;
}