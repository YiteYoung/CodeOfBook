#include "charter3Test.h"

int _1stCode(void)
{
	printf("Enter a date (mm/dd/yyyy):");
	int mm, dd, yyyy;
	scanf("%d/%d/%d", &mm, &dd, &yyyy);
	printf("You enter the date %4d%2.2d%2d", yyyy, mm, dd);
	return 1;
}

int _2ndCode(void)
{
	printf("Enter item number:");
	int number;
	scanf("%d", &number);
	printf("Enter unit price:");
	float price;
	scanf("%f", &price);
	printf("Enter purchase date (mm/dd/yyyy):");
	int mm, dd, yyyy;
	scanf("%d/%d/%d", &mm, &dd, &yyyy);
	printf("Item\tUnit\tPurchase\t\n\tPrice\tDate\n");
	printf("%-d\t$%7.2f\t%2d/%2d/%4d\n", number, price, dd, mm, yyyy);
	return 1;
}

int _3rdCode(void)
{
	printf("Enter ISBN:");
	int code[5];
	scanf("%d-%d-%d-%d-%d", &code[0], &code[1], &code[2], &code[3], &code[4]);
	printf("GSI prefix:%d\n", code[0]);
	printf("Group identifier:%d\n", code[1]);
	printf("Publisher code:%d\n", code[2]);
	printf("Item number:%d\n", code[3]);
	printf("Check digit:%d\n", code[4]);
	return 1;
}

int _4thCode(void)
{
	printf("Enter phone number [(xxx)xxx-xxxx]:");
	int x, y, z;
	scanf("%d)%d-%d", &x, &y, &z);
	printf("Your entered %d.%d.%d", x, y, z);
	return 1;
}

int _5thCode(void)
{
	printf("Enter the numbers from 1 to 16 in any order:\n");
	int magicSquare[4][4] = { 16,3,2,13,5,10,11,8,9,6,7,12,4,15,14,1 };
	//scanf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d"
	//	, &magicSquare[0][0], &magicSquare[0][1], &magicSquare[0][2], &magicSquare[0][3]
	//	, &magicSquare[1][0], &magicSquare[1][1], &magicSquare[1][2], &magicSquare[1][3]
	//	, &magicSquare[2][0], &magicSquare[2][1], &magicSquare[2][2], &magicSquare[2][3]
	//	, &magicSquare[3][0], &magicSquare[3][1], &magicSquare[3][2], &magicSquare[3][3]);
	for (int i = 0; i <= 3; i++)
	{
		printf("%2d %2d %2d %2d\n", magicSquare[i][0], magicSquare[i][1], 
									magicSquare[i][2], magicSquare[i][3]);
	}
	int sum[3][4] = {0};
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			for (int k = 0; k < 4; k++)
			{
				if (!i)
				{
					sum[i][j] += magicSquare[j][k];
				}
				else if(i == 1)
				{
					sum[i][j] += magicSquare[k][j];
				}
				else
				{
					if (!j)
					{
						sum[i][j] += magicSquare[k][k];
					}
					else
					{
						sum[i][j] += magicSquare[k][3];
						sum[i][j] += magicSquare[k][2];
						sum[i][j] += magicSquare[k][1];
						sum[i][j] += magicSquare[k][0];
						break;
					}
				}
				
			}
			
		}
	}
	printf("Row sums:%d %d %d %d\n", sum[0][0], sum[0][1], sum[0][2], sum[0][3]);
	printf("Colum sums:%d %d %d %d\n", sum[1][0], sum[1][1], sum[1][2], sum[1][3]);
	printf("Diagonal sums:%d %d", sum[2][0], sum[2][1]);
	return 1;
}

int _6thCode(void)
{
	int num[3][2];
	printf("Enter two fraction by +(a/b+c/d):");
	scanf("%d/%d+%d/%d", &num[0][0], &num[0][1], &num[1][0], &num[1][1]);
	num[2][0] = num[0][0] * num[1][1] + num[1][0] * num[0][1];
	num[2][1] = num[0][1] * num[1][1];
	printf("%d/%d", num[2][0], num[2][1]);
	return 1;
}
