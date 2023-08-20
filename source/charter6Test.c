#include "charter6Test.h"

int _1stCode()
{
	float num, max = 0;
	while (true)
	{
		printf("Enter a number:");
		scanf("%f", &num);
		max = num > max ? num : max;
		if (num <= 0)
		{
			break;
		}
	}
	printf("The largest number entered was %f", max);
	return 1;
}

int _2ndCode()
{
	printf("Enter two integers:");
	int m, n, temp;
	scanf("%d %d", &m, &n);
	int GCD;
	while (true)
	{
		if (n == 0)
		{
			GCD = m;
			break;
		}
		else
		{
			temp = m;
			m = n;
			n = temp % n;
		}
	}
	printf("Greatest common divisor:%d", GCD);
	return 1;
}

int _3rdCode()
{
	printf("Enter a fraction:");
	int m, n, temp, temp1, temp2;
	scanf("%d/%d", &m, &n);
	temp1 = m;
	temp2 = n;
	int GCD;
	while (true)
	{
		if (n == 0)
		{
			GCD = m;
			break;
		}
		else
		{
			temp = m;
			m = n;
			n = temp % n;
		}
	}
	printf("In lowest terms:%d/%d", temp1 / GCD, temp2 / GCD);
	return 1;
}

int _4thCode()
{
	printf("Enter value of trade:");
	float value, commission;
	while (true)
	{
		scanf("%f", &value);
		if (value)
		{
			if (value < 2500.00f)
			{
				commission = 30.00f + .017f * value;
			}
			else if (value < 6250.00f && value >= 2500.00f)
			{
				commission = 56.00f + .0066f * value;
			}
			else if (value < 20000.00f && value >= 6250.00f)
			{
				commission = 76.00f + .0034f * value;
			}
			else if (value < 50000.00f && value >= 20000.00f)
			{
				commission = 100.00f + .0022f * value;
			}
			else if (value < 500000.00f && value >= 50000.00f)
			{
				commission = 155.00f + .0011f * value;
			}
			else
			{
				commission = 255.00f + .0009f * value;
			}
			printf("commission:$%.2f", commission);
		}
		else
		{
			break;
		}
	}
	return 1;
}

int _5thCode()
{
	printf("Enter a number:");
	int num, temp, result = 0;
	scanf("%d", &num);
	temp = num;
	do
	{
		temp /= 10;
		result++;
	} while (temp);
	printf("The number %d has %d digits", num, result);
	return 1;
}

int _6thCode()
{
	printf("Enter a number:");
	int num;
	scanf("%d", &num);
	for (int i = 0; i < num; i++)
	{
		if (i % 2 == 0)
		{
			printf("%d", i * i);
		}
	}
	return 1;
}

int _7thCode()
{
	int n;
	printf("This program prints a table of square.\n");
	printf("Enter number of entries in table:");
	scanf("%d", &n);
	for (int i = 1, square = 1, odd = 3; i <= n; ++i, odd += 2)
	{
		printf("%10d%10d\n", i, square);
		square += odd;
	}
	return 1;
}

int _8thCode()
{
	printf("Enter number of days in month:");
	int days, beginDay;
	scanf("%d", &days);
	printf("Enter starting day of the week (1=Sun,7=Sat):");
	scanf("%d", &beginDay);
	int count = 0;
	for (int i = 1; i < days + beginDay; i++)
	{
		if (i < beginDay)
		{
			printf("   ");
		}
		else
		{
			printf("%2d ", i - beginDay + 1);
		}
		count++;
		if (count == 7)
		{
			printf("\n");
			count = 0;
		}
	}
	return 1;
}

int _9thCode()
{
	float loan, rate, payment;
	printf("Enter amount of loan:");
	scanf("%f", &loan);
	printf("Enter interest rate :");
	scanf("%f", &rate);
	rate = rate * 0.01f / 12.0f;
	printf("Enter monthly payment:");
	scanf("%f", &payment);
	printf("Enter Number of repayments:");
	int n;
	scanf("%d", &n);
	float rest = loan;
	for (int i = 0; i < n; i++)
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
			printf("Balance remaining after %d payment: $%.2f\n", i, rest);
		}
	}
	return 1;
}

#define yy 2
#define mm 0
#define dd 1
int _10thCode()
{
	int Date[3];
	int earlierDate[3] = { 99,99,99 };
	while (true)
	{
		printf("Enter a date(mm/dd/yy):");
		scanf("%d/%d/%2d", &Date[mm], &Date[dd], &Date[yy]);
		if (Date[mm] == 0 && Date[dd] == 0 && Date[yy] == 0)
		{
			break;
		}
		if (Date[yy] < earlierDate[yy])
		{
			earlierDate[yy] = Date[yy];
			earlierDate[mm] = Date[mm];
			earlierDate[dd] = Date[dd];
		}
		else if (Date[mm] < earlierDate[mm])
		{
			earlierDate[yy] = Date[yy];
			earlierDate[mm] = Date[mm];
			earlierDate[dd] = Date[dd];
		}
		else if (Date[dd] < Date[dd])
		{
			earlierDate[yy] = Date[yy];
			earlierDate[mm] = Date[mm];
			earlierDate[dd] = Date[dd];
		}
	}
	printf("%d/%d/%d is the earliest date", earlierDate[mm], earlierDate[dd], earlierDate[yy]);
	return 1;
}

int _11stCode()
{
	printf("Enter n:");
	int n;
	scanf("%d", &n);
	double e = 1.0f, fm = 1.0f;
	for (int i = 1; i <= n; i++)
	{
		fm *= i;
		e += 1.0f / fm;
	}
	printf("Result is %lf", e);
	return 1;
}

int _12ndCode()
{
	printf("Enter stop number:");
	double n;
	scanf("%lf", &n);
	long double e = 1.0f, fm = 1.0f;
	for (int i = 1; 1.0f / fm > n; i++)
	{
		fm *= i;
		e += 1.0f / fm;
	}
	printf("Result is %.20Lf", e);
	return 1;
}