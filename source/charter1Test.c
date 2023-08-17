#include "charter1Test.h"

#define scanf scanf_s
#define PI 3.14159
#define X_N(x, n, y) {(y) = (x);for(int i = 0; i < ((n) - 1); i++) { (y) *= (x);}} 

int _1stCode(void)
{
	printf("\n       *\n");
	printf("      *\n");
	printf("     *\n");
	printf("*   *\n");
	printf(" * *\n");
	printf("  *\n");
	return 1;
}

int _2ndCode(void)
{
	float r = 10, r3;
	double v;
	r3 = r * r * r;
	v = 4.0f / 3.0f * PI * r3;
	printf("%f", v);
	return 1;
}

int _3rdCode(void)
{
	float r, r3;
	double v;
	printf("enter your R:");
	scanf("%f", &r);
	r3 = r * r * r;
	v = 4.0f / 3.0f * PI * r3;
	printf("%f", v);
	return 1;
}

int _4thCode(void)
{
	float amount;
	printf("enter an amount : ");
	scanf("%f", &amount);
	printf("With tax added : $%.2f", (double)amount * 1.05f);
	return 1;
}

int _5thCode(void)
{
	float x, result[6] = { 1 };
	printf("Enter x : ");
	scanf("%f", &x);
	if (x)
	{
		X_N(x, 5,result[0]);
		X_N(x, 4,result[1]);
		X_N(x, 3,result[2]);
		X_N(x, 2,result[3]);
		result[0] *= 3;
		result[1] *= 2;
		result[2] = -5 * result[2];
		result[3] = -result[3];
		result[4] = 7 * x;
		for (int i = 0; i < 5; i++)
			result[5] += result[i];
		result[5] += -6;
	}
	else
	{
		result[5] = 0;
	}
	printf("Result is : %f", result[5]);
	return 1;
}

int _6thCode(void)
{
	float x, result;
	printf("Enter x :");
	scanf("%f", &x);
	if (x)
		result = ((((3 * x + 2) * x - 5) * x - 1) * x + 7) * x - 6;
	else
	{
		result = 0;
	}
	printf("Result is : %f", result);
	return 1;
}

int _7thCode(void)
{
	int x, result[4];
	printf("Enter a dollar amount :");
	scanf("%d", &x);
	if (x)
	{
		result[0] = x / 20;
		result[1] = (x - (result[0] * 20)) / 10;
		result[2] = (x - (result[0] * 20) - (result[1] * 10)) / 5;
		result[3] = (x - (result[0] * 20) - (result[1] * 10) - (result[2] * 5)) / 1;
		printf("$20 bills: %d\n", result[0]);
		printf("$10 bills: %d\n", result[1]);
		printf("$5 bills: %d\n", result[2]);
		printf("$1 bills: %d\n", result[3]);
	}
	else
	{
		printf("$20 bills: %d", 0);
		printf("$10 bills: %d", 0);
		printf("$5 bills: %d", 0);
		printf("$1 bills: %d", 0);
	}
	return 1;
}

int _8thCode(void)
{
	float loan, rate, payment;
	printf("Enter amount of loan:");
	scanf_s("%f", &loan);
	printf("Enter interest rate :");
	scanf("%f", &rate);
	rate = rate * 0.01f / 12.0f;
	printf("Enter monthly payment:");
	scanf("%f", &payment);
	float rest = payment;
	char string[3][7] = { {"frist"}, {"second"},{"thrid"} };
	for (int i = 0; i < 3; i++)
	{
		rest = (rest * rate) + (loan - payment);
		loan = rest;
		if (loan <= 0)
		{
			printf("Balance remaining after frist payment: 0");
			break;
		}
		else
		{
			printf("Balance remaining after %s payment: $%.2f\n", string[i], rest);
		}
	}
	return 1;
}
