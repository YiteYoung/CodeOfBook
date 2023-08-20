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
	double n, sum = 0.0f;
	printf("Enter float (0.0 to terminate):");
	scanf("%lf", &n);
	while (n != 0.0)
	{
		sum += n;
		scanf("%lf", &n);
	}
	printf("The sum is:%Lf", sum);
	return 1;
}

int _4thCode()
{
	printf("Enter phone number:");
	char num[50];
	int i = 0;
	int length;
	while ((num[i] = getchar()) != '\n')
	{
		i++;
	}
	length = i;
	for ( i = 0; i < length; i++)
	{
		if (num[i] == 'A' || num[i] == 'B' || num[i] == 'C')
		{
			num[i] = '2';
		}
		else if (num[i] == 'D' || num[i] == 'E' || num[i] == 'F')
		{
			num[i] = '3';
		}
		else if (num[i] == 'G' || num[i] == 'H' || num[i] == 'I')
		{
			num[i] = '4';
		}
		else if (num[i] == 'J' || num[i] == 'K' || num[i] == 'L')
		{
			num[i] = '5';
		}
		else if (num[i] == 'M' || num[i] == 'N' || num[i] == 'O')
		{
			num[i] = '6';
		}
		else if (num[i] == 'P' || num[i] == 'Q' || num[i] == 'R' || num[i] == 'S')
		{
			num[i] = '7';
		}
		else if (num[i] == 'T' || num[i] == 'U' || num[i] == 'V')
		{
			num[i] = '8';
		}
		else if (num[i] == 'W' || num[i] == 'X' || num[i] == 'Y' || num[i] == 'Z')
		{
			num[i] = '9';
		}
		for ( i = 0; i < length; i++)
		{
			printf("%c", num[i]);
		}
	}
	return 1;
}

int _5thCode()
{
	printf("Enter a word:");
	char num[50];
	int i = 0;
	int length, sum = 0;
	while ((num[i] = getchar()) != '\n')
	{
		i++;
	}
	length = i;
	for (i = 0; i < length; i++)
	{
		num[i] = toupper(num[i]);
		if (num[i] == 'A' || num[i] == 'E' || num[i] == 'I' || num[i] == 'L' || num[i] == 'N' || num[i] == 'R' ||
			num[i] == 'O' || num[i] == 'S' || num[i] == 'T' || num[i] == 'U')
		{
			num[i] = 1;
		}
		else if (num[i] == 'D' || num[i] == 'G')
		{
			num[i] = 2;
		}
		else if (num[i] == 'B' || num[i] == 'C' || num[i] == 'M' || num[i] == 'P')
		{
			num[i] = 3;
		}
		else if (num[i] == 'F' || num[i] == 'H' || num[i] == 'V' || num[i] == 'W' || num[i] == 'Y')
		{
			num[i] = 4;
		}
		else if (num[i] == 'K')
		{
			num[i] = 5;
		}
		else if (num[i] == 'J' || num[i] == 'X')
		{
			num[i] = 8;
		}
		else if (num[i] == 'Q' || num[i] == 'Z')
		{
			num[i] = 10;
		}
		sum += num[i];
	}
	printf("Scrabble value:%d", sum);
	return 1;
}

int _6thCode()
{
	printf("Siez of int:%d\n", sizeof(int));
	printf("Siez of short:%d\n", sizeof(short));
	printf("Siez of long:%d\n", sizeof(long));
	printf("Siez of float:%d\n", sizeof(float));
	printf("Siez of double:%d\n", sizeof(double));
	printf("Siez of long double:%d", sizeof(long double));
	return 1;
}

int _7thCode()
{
	int num[3][2];
	char ch;
	printf("Enter two fraction:");
	scanf("%d/%d%c%d/%d", &num[0][0], &num[0][1], &ch, &num[1][0], &num[1][1]);
	switch (ch)
	{
	case '+': 
	{
		num[2][0] = num[0][0] * num[1][1] + num[1][0] * num[0][1];
		num[2][1] = num[0][1] * num[1][1];
		printf("%d/%d", num[2][0], num[2][1]);
	} break;
	case '-':
	{
		num[2][0] = num[0][0] * num[1][1] - num[1][0] * num[0][1];
		num[2][1] = num[0][1] * num[1][1];
		printf("%d/%d", num[2][0], num[2][1]);
	} break;
	case '*':
	{
		num[2][0] = num[0][0] * num[1][0];
		num[2][1] = num[0][1] * num[1][1];
		printf("%d/%d", num[2][0], num[2][1]);
	} break;
	case '/':
	{
		num[2][0] = num[0][0] * num[1][1];
		num[2][1] = num[0][1] * num[1][0];
		printf("%d/%d", num[2][0], num[2][1]);
	} break;
	default:
		break;
	}
	return 1;
}

#define MINTIME(x,y) (x) * 60 + (y)

int _8thCode()
{
	printf("Enter a 12-hour time:");
	int h12, mm;
	char type;
	scanf("%d:%d", &h12, &mm);
	type = getchar();
	int mintues, minBis[8], min = MINTIME(24, 60);
	mintues = MINTIME(h12, mm);
	while (type == ' ')
	{
		type = toupper(getchar());
	}
	if (type == 'P')
	{
		mintues += 12 * 60;
	}
	int takeofftime[8] = { MINTIME(8, 0), MINTIME(9, 43), MINTIME(11, 19), MINTIME(12,47),
						   MINTIME(14,0), MINTIME(15,45),MINTIME(17, 0), MINTIME(21, 45) };
	int arrivetime[8] = { MINTIME(10,16), MINTIME(11,52), MINTIME(13,31), MINTIME(15,0),
						MINTIME(16,8), MINTIME(17,55), MINTIME(21,20), MINTIME(23,58), };
	int minCount = 0;
	for (int i = 0; i < 8; i++)
	{
		minBis[i] = abs(mintues - takeofftime[i]);
		if (min > minBis[i])
		{
			min = minBis[i];
			minCount = i;
		}
	}
	h12 = takeofftime[minCount] / 60;
	mm = takeofftime[minCount] - (h12 * 60);
	if (h12 > 12)
	{
		printf("Closest departure time is %2d:%2d p.m.,", h12 - 12, mm);
		if (arrivetime[minCount] > (12 * 60))
		{
			printf("arriving at %2d:%2d p.m.", ((arrivetime[minCount] / 60) - 12), (arrivetime[minCount] - ((arrivetime[minCount] / 60) * 60)));
		}
		else
		{
			printf("arriving at %2d:%2d a.m.", (arrivetime[minCount] / 60), (arrivetime[minCount] - ((arrivetime[minCount] / 60) * 60)));
		}
	}
	else
	{
		printf("Closest departure time is %2d:%2d a.m.,", h12, mm);
		if (arrivetime[minCount] > (12 * 60))
		{
			printf("arriving at %2d:%2d p.m.", (arrivetime[minCount] / 60) - 12, arrivetime[minCount] - ((arrivetime[minCount] / 60) * 60));
		}
		else
		{
			printf("arriving at %2d:%2d a.m.", arrivetime[minCount] / 60, arrivetime[minCount] - ((arrivetime[minCount] / 60) * 60));
		}
	}
	return 1;
}

int _9thCode()
{
	printf("Enter a 12-hour time:");
	int h12, mm;
	char type;
	scanf("%d:%d", &h12, &mm);
	type = getchar();
	while (type == ' ')
	{
		type = toupper(getchar());
	}
	if (type == 'P')
	{
		h12 += 12;
		if (h12 >= 24)
		{
			type = 'A';
			h12 = 0;
		}
	}
	printf("Equivalent 24-hour time:%d:%d", h12, mm);
	return 1;
}

int _10thCode()
{
	printf("Enter a sentence:");
	int sum = 0;
	char ch;
	ch = getchar();
	while (ch != '\n')
	{
		if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' ||
			ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
		{
			sum++;
		}
		ch = getchar();
	}
	printf("Your sentence contains %d vowels.", sum);
	return 1;
}

int _11stCode()
{
	printf("Enter frist name and last name:");
	char fristName, lastName;
	fristName = getchar();
	while (getchar() != ' ')
	{
		;
	}
	lastName = getchar();
	while (lastName != '\n')
	{
		printf("%c", lastName);
		lastName = getchar();
	}
	printf("£¬%c.", fristName);
	return 1;
}

int _12ndCode()
{
	printf("Enter an expression:");
	float num[50] = { 0 };
	char ch;
	char op[50];
	int i = 0;
	scanf("%f", &num[i]);
	op[i] = getchar();
	ch = getchar();
	while (ch != '\n')
	{
		i++;
		float times = 0.1f, detimes = 1.0f;
		int flag = 0;
		while ((48 <= ch && ch <= 57) || ch == '.')
		{
			if (ch == '.')
			{
				flag = 1;
				ch = getchar();
			}
			if (flag)
			{
				float Bit;
				Bit = (float)ch - 48;
				detimes /= 10.0f;
				num[i] += Bit * detimes;
			}
			else
			{
				float Bit;
				Bit = (float)ch - 48;
				if (num[i] < 1)
				{
					num[i] = Bit;
				}
				else
				{
					num[i] *= 10.0f;
					num[i] += Bit;
				}
			}
			ch = getchar();
		}
		op[i] = ch;
		if (ch != '\n')
		{
			ch = getchar();
		}
	}
	for (int j = 0; j < i; j++)
	{
		switch (op[j])
		{
		case '+': {num[j + 1] = num[j] + num[j + 1];} break;
		case '-': {num[j + 1] = num[j] - num[j + 1];} break;
		case '*': {num[j + 1] = num[j++] * num[j + 1];} break;
		case '/': {num[j + 1] = num[j++] / num[j + 1];} break;
		default:
			break;
		}
	}
	printf("Value of expression:%f", num[i]);
	return 1;
}

int _13rdCode()
{
	printf("Enter a sentence:");
	float avg = 0; //µ¥´ÊÊý
	char ch;
	int count = 0; //×ÖÄ¸Êý
	while ((ch = getchar()) != '\n')
	{
		if (ch == ' ')
		{
			avg++;
			continue;
		}
		count++;
	}
	printf("Average word length:%.1f", (float) count / (avg + 1));
	return 1;
}

int _14thCode()
{
	printf("Enter a positive number:");
	double num, result;
	scanf("%lf", &num);
	double xk = 1, xk1 = 0;
	if (num != 0)
	{
		while (fabs(xk - xk1) > 1e-6)
		{
			xk1 = xk;
			xk = (xk - num / xk) / 2;
		}
		printf("Square root:%Lf", xk);
	}
	else 
	{
		printf("num cannot be 0\n");
	}
	return 1;
}

int _15thCode()
{
	int i, n;
	short fact = 1;

	printf("Enter a positive integer: ");
	scanf("%d", &n);

	for (i = n; i > 1; i--)
		fact *= i;
	printf("Factorial of %d: %d\n", n, fact);
	return 1;
}