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
				value[i] *= ((double)low_rate + i) / 12.0 / 100.0 + 1.0;
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
	int count = 26;
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

#define MINTIME(x,y) (x) * 60 + (y)

int _10thCode()
{
	printf("Enter a 24-hour time:");
	int h24, m24;
	scanf("%d:%d", &h24, &m24);
	int mintues, minBis[8], min = MINTIME(24, 60);
	mintues = MINTIME(h24, m24);
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
	h24 = takeofftime[minCount] / 60;
	m24 = takeofftime[minCount] - (h24 * 60);
	if (h24 > 12)
	{
		printf("Closest departure time is %2d:%2d p.m.,", h24 - 12, m24);
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
		printf("Closest departure time is %2d:%2d a.m.,", h24, m24);
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

int _11stCode()
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
	printf("In numberic form:");
	for (i = 0; i < length; i++)
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
		for (i = 0; i < length; i++)
		{
			printf("%c", num[i]);
		}
	}
	return 1;
}

int _12ndCode()
{
	int value[26] = { 1,3,3,2,1,4,2,4,1,8,5,1,3,1,1,3,10,1,1,1,1,4,4,8,4,10 };
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
		sum += value[(int)num[i] - 65];
	}
	printf("Scrabble value:%d", sum);
	return 1;
}

int _13rdCode()
{
	printf("Enter frist name and last name:");
	char fristName[20], lastName;
	int i = 0;
	while ((fristName[i] = getchar()) != ' ')
	{
		i++;
	}
	lastName = getchar();
	while (lastName != '\n')
	{
		printf("%c", lastName);
		lastName = getchar();
	}
	printf("，%c.", fristName[0]);
	return 1;
}

int _14thCode()
{
	char sentence[100] = { 0 }, ch, stop_char = ' ';
	int index = 0;

	printf("Enter a sentence: ");
	ch = getchar();
	while ((ch = getchar()) != '\n' && index < 100)
	{
		if (ch == ' ' && sentence[0] == 0)
		{
			continue;
		}

		if (ch == '.' || ch == '?' || ch == '!')
		{
			stop_char = ch;
			break;
		}

		sentence[index++] = ch;
	}

	printf("Reversal of sentence: ");
	for (int i = 100 - 1; i >= 0; i--)
	{
		ch = sentence[i];
		if (ch == ' ' || i == 0) 
		{
			index = i < 0 ? 0 : i;
			while (sentence[index] && sentence[index] != ' ') 
			{
				putchar(sentence[index++]);
			}

			if (i && index != (i == 0 ? 0 : i + 1)) putchar(' ');
		}
	}
	printf("%c\n", stop_char);
	return 1;
}

int _15thCode()
{
	char sentence[100] = { 0 };
	char ch;
	int index = 0, shift;

	printf("Enter message to be encrypted: ");
	ch = getchar();
	while ((ch = getchar()) != '\n' && index < 100) 
	{
		sentence[index++] = ch;
	}

	printf("Enter shift amount (1-25): ");
	scanf("%d", &shift);

	printf("Encrypted message: ");
	for (int i = 0; i < index; i++)
	{
		ch = sentence[i];
		if (isupper(ch))
		{
			ch = ((ch - 'A') + shift) % 26 + 'A';
		}
		else if (islower(ch))
		{
			ch = ((ch - 'a') + shift) % 26 + 'a';
		}
		putchar(ch);
	}
	return 1;
}

int _16thCode()
{
	int num[50] = { 0 };
	char ch = 65;
	printf("Enter frist word:");
	ch = getchar();
	while ((ch = getchar()) != '\n')
	{
		ch = tolower(ch);
		num[(ch - 'a') < 0 ? 0 : (ch - 'a')] += 1;
	}
	printf("Enter sencond word:");
	while ((ch = tolower(getchar())) != '\n')
	{
		num[(ch - 'a') < 0 ? 0 : (ch - 'a')] -= 1;
	}
	for (int i = 0; i < 26; i++)
	{
		if (num[i] > 0)
		{
			printf("The words are not anagrams.");
			break;
		}
		else if (i == 25)
		{
			printf("The words are anagrams.");
		}
		
	}
	return 1;
}

int _17thCode()
{
	int n, x = 0, y, next_x, next_y;

	printf("This program creates a magic square of a specified size.\n"
		"The size must be an odd number between 1 and 99.\n"
		"Enter size of magic square : ");
	scanf("%d", &n);

	y = n / 2;

	int matrix[50][50] = { 0 };

	matrix[x][y] = 1;
	for (int i = 2; i <= n * n; i++)
	{
		next_x = (x - 1 + n) % n;
		next_y = (y + 1 + n) % n;

		if (matrix[next_x][next_y])
		{
			x = x + 1;
		}
		else {
			x = next_x;
			y = next_y;
		}
		matrix[x][y] = i;
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			printf("%4d", matrix[i][j]);
		}
		printf("\n");
	}
	return 1;
}
