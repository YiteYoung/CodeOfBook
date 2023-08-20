#include "charter8Test.h"

int _1stCode()
{
	int digit_seen[10] = { 0 };
	int digit;
	long n;
	printf("Enter a number: ");
	scanf("%ld", &n);
	while (n > 0) 
	{
		digit = n % 10;
		digit_seen[digit] += 1;
		n /= 10;
	}
	printf("Repeated digit(s): ");
	for (int i = 0; i < 10; i++)
	{
		if (digit_seen[i] > 1) 
		{
			printf("%d ", i);
		}
	}
	return 1;
}

int _2ndCode()
{
	int digit_seen[10] = { 0 };
	int digit;
	long n;
	printf("Enter a number: ");
	scanf("%ld", &n);
	while (n > 0) 
	{
		digit = n % 10;
		digit_seen[digit] += 1;

		n /= 10;
	}
	printf("Digit:      ");
	for (int i = 0; i < 10; i++)
	{
		printf("%d ", i);
	}
	printf("\n");
	printf("Occurrences:    ");
	for (int i = 0; i < 10; i++)
	{
		printf("%d ", digit_seen[i]);
	}
	return 1;
}

int _3rdCode()
{
	int digit_seen[10] = { 0 };
	int digit;
	long n;
	while(true)
	{
		printf("Enter a number: ");
		scanf("%ld", &n);
		if (n <= 0)
		{
			break;
		}
		while (n > 0)
		{
			digit = n % 10;
			digit_seen[digit] += 1;

			n /= 10;
		}
		printf("Digit:      ");
		for (int i = 0; i < 10; i++)
		{
			printf("%d ", i);
		}
		printf("\n");
		printf("Occurrences:    ");
		for (int i = 0; i < 10; i++)
		{
			printf("%d ", digit_seen[i]);
		}
	}
	return 1;
}

int _4thCode()
{
	int a[10], i, array_length = (int)(sizeof(a) / sizeof(a[0]));
	printf("Enter %d numbers: ", 10);
	for (i = 0; i < array_length; i++)
	{
		scanf("%d", &a[i]);
	}
	printf("In reverse order:");
	for (i = array_length - 1; i >= 0; i--)
	{
		printf(" %d", a[i]);
	}
	printf("\n");
	return 1;
}

#define NUM_RATES ((int) (sizeof(value) / sizeof(value[0])))
#define INITIAL_BALANCE 100.00

int _5thCode()
{
	int i, low_rate, num_years, month, year;
	double value[5];

	printf("Enter interest rate: ");
	scanf("%d", &low_rate);
	printf("Enter number of years: ");
	scanf("%d", &num_years);

	printf("\n Years");
	for (i = 0; i < NUM_RATES; i++) {
		printf("%6d%%", low_rate + i);
		value[i] = INITIAL_BALANCE;
	}
	printf("\n");

	for (year = 1; year <= num_years; year++) {
		printf("%3d    ", year);
		for (i = 0; i < NUM_RATES; i++) {
			for (month = 1; month <= 12; month++)
				value[i] *= (double)(low_rate + i) / 12.0 / 100.0 + 1.0;
			printf("%7.2f", value[i]);
		}
		printf("\n");
	}
	return 1;
}

int _7thCode()
{
	int array[5][5] = { 0 }, row_total[5] = { 0 }, col_total[5] = { 0 };

	for (int i = 0; i < 5; i++)
	{
		printf("Enter row %d: ", i + 1);
		for (int j = 0; j < 5; j++)
		{
			scanf("%d", &array[i][j]);
		}
	}
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			row_total[i] += array[i][j];
			col_total[j] += array[i][j];
		}
	}
	printf("\nRow totals: ");
	for (int i = 0; i < 5; i++)
	{
		printf("%d ", row_total[i]);
	}
	printf("\nColumn totals: ");
	for (int i = 0; i < 5; i++)
	{
		printf("%d ", col_total[i]);
	}
	return 1;
}

int _6thCode()
{
	char message[100] = { 0 }, ch;
	int i = 0;

	printf("Enter message: ");
	while ((ch = getchar()) != '\n' && i < 100)
	{
		message[i++] = ch;
	}

	printf("In BIFF-speak: ");
	for (i = 0; i < 100; i++)
	{
		if (message[i]) 
		{
			ch = toupper(message[i]);
			switch (ch)
			{
			case 'A': ch = '4'; break;
			case 'B': ch = '8'; break;
			case 'E': ch = '3'; break;
			case 'I': ch = '1'; break;
			case 'O': ch = '0'; break;
			case 'S': ch = '5'; break;
			default:
				break;
			}
			putchar(ch);
		}
		else 
		{
			break;
		}
	}
	for (i = 0; i < 10; i++)
	{
		putchar('!');
	}
	return 1;
}

int _8thCode()
{
	int array[5][5] = { 0 }, row_total[5] = { 0 }, col_total[5] = { 0 };
	int max[5] = { 0 }, min[5] = { 100 };
	for (int i = 0; i < 5; i++)
	{
		printf("Enter row %d: ", i + 1);
		for (int j = 0; j < 5; j++)
		{
			scanf("%d", &array[i][j]);
		}
	}
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			max[i] = max[i] < array[j][i] ? array[j][i] : max[i];
			min[i] = min[i] < array[j][i] ? min[i] : array[j][i];
			row_total[i] += array[i][j];
			col_total[j] += array[i][j];
		}
	}
	printf("\nStudent sum: ");
	for (int i = 0; i < 5; i++)
	{
		printf("%d ", row_total[i]);
	}
	printf("\nAvg: ");
	for (int i = 0; i < 5; i++)
	{
		printf("%d ", col_total[i] / 5);
	}
	printf("\nhighest:");
	for (int i = 0; i < 5; i++)
	{
		printf("%d ", max[i]);
	}
	printf("\nLowest:");
	for (int i = 0; i < 5; i++)
	{
		printf("%d ", min[i]);
	}
	return 1;
}

#define ALLArrived arrived[(nowRow-1)<0?0:nowRow-1][nowCol] && arrived[(nowRow+1)>99?99:nowRow+1][nowCol] && arrived[nowRow][(nowCol-1)<0?0:nowCol-1] && arrived[nowRow][(nowCol+1)>99?99:nowCol+1]

int _9thCode()
{
	bool arrived[10][10];
	char map[10][10];
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			map[i][j] = '.';
			arrived[i][j] = false;
		}
	}
	srand((unsigned int)time(NULL));
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			printf("%c ", map[i][j]);
		}
		printf("\n");
	}
	char letter = 65;
	int count = 36;
	int nowRow = 0, nowCol = 0;
	map[nowRow][nowCol] = letter++; //A：Z = 65：90 
	arrived[nowRow][nowCol]= true;
	while (count)
	{
		switch (rand() % 4) //生成0-3随机数
		{
		case 0: 
		{
			if ((nowRow - 1 < 0) || arrived[nowRow - 1][nowCol] == true)
			{
				continue;
			}
			else if (ALLArrived)
			{
				count = 0;
			}
			else
			{
				arrived[nowRow - 1][nowCol] = true;
				nowRow -= 1;
				map[nowRow][nowCol] = letter++;
				count--;
			}
		} break;
		case 1:
		{
			if ((nowRow + 1 > 10) || arrived[nowRow + 1][nowCol] == true)
			{
				continue;
			}
			else if (ALLArrived)
			{
				count = 0;
			}
			else
			{
				arrived[nowRow + 1][nowCol] = true;
				nowRow += 1;
				map[nowRow][nowCol] = letter++;
				count--;
			} break;
		}
		case 2:
		{
			if ((nowCol - 1 < 0) || arrived[nowRow][nowCol - 1] == true)
			{
				continue;
			}
			else if (ALLArrived)
			{
				count = 0;
			}
			else
			{
				arrived[nowRow][nowCol - 1] = true;
				nowCol -= 1;
				map[nowRow][nowCol] = letter++;
				count--;
			} break;
		}
		case 3:
		{
			if ((nowCol + 1 > 10) || arrived[nowRow][nowCol + 1] == true)
			{
				continue;
			}
			else if (ALLArrived)
			{
				count = 0;
			}
			else
			{
				arrived[nowRow + 1][nowCol] = true;
				nowCol += 1;
				map[nowRow][nowCol] = letter++;
				count--;
			} break;
		}
		default:
			break;
		}
	}
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			printf("%c ", map[i][j]);
		}
		printf("\n");
	}
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

int _16thCode()
{
	return 1;
}

int _17thCode()
{
	return 1;
}
