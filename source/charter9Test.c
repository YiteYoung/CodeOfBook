#include "charter9Test.h"

int selection_sort(int num[], int n, int max)
{
	int count, temp;
	if (n <= 0)
		return 1;
	for (int i = 0; i < n; i++)
	{
		if (max < *(num + i))
		{
			max = *(num + i);
			count = i;
		}
	}
	temp = num[n - 1];
	num[n - 1] = max;
	num[count] = temp;
	return selection_sort(num, --n, 0);
}

int _1stCode()
{
	printf("Enter n:");
	int n;
	scanf("%d", &n);
	int num[50];
	printf("Enter num:");
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &num[i]);
	}
	selection_sort(num, n, 0);
	for (int i = 0; i < n; i++)
	{
		printf("%d ", num[i]);
	}
	return 1;
}

float taxCal(int income)
{
	float tax;
	if (income < 750.00f)
		tax = 0.01f * income;
	else if (750.00f <= income && income <= 2250.00f)
		tax = ((income - 750.00f) * 0.02f) + 7.50f;
	else if (2250.00f <= income && income <= 3750.00f)
		tax = ((income - 2250.00f) * 0.03f) + 37.50f;
	else if (3750.00f <= income && income <= 5250.00f)
		tax = ((income - 3750.00f) * 0.04f) + 82.50f;
	else if (5250.00f <= income && income <= 7000.00f)
		tax = ((income - 5250.00f) * 0.05f) + 142.50f;
	else if (income > 7000.00f)
		tax = ((income - 7000.00f) * 0.06f) + 230.00f;
	return tax;
}

int _2ndCode()
{
	printf("Enter income:");
	float income, tax;
	scanf("%f", &income);
	tax = taxCal(income);
	printf("Your tax is:%.2f", tax);
	return 1;
}

#define ALLArrived walked[(nowRow-1)<0?0:nowRow-1][nowCol] && walked[(nowRow+1)>99?99:nowRow+1][nowCol] && walked[nowRow][(nowCol-1)<0?0:nowCol-1] && walked[nowRow][(nowCol+1)>99?99:nowCol+1]

void generate_random_walk(char walk[10][10], char walked[10][10])
{
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			walk[i][j] = '.';
			walked[i][j] = false;
		}
	}
	srand((unsigned int)time(NULL));
	char letter = 65;
	int count = 26;
	int nowRow = 0, nowCol = 0;
	walk[nowRow][nowCol] = letter++; //A：Z = 65：90 
	walked[nowRow][nowCol] = true;
	while (count)
	{
		switch (rand() % 4) //生成0-3随机数
		{
		case 0:
		{
			if ((nowRow - 1 < 0) || walked[nowRow - 1][nowCol] == true)
			{
				continue;
			}
			else if (ALLArrived)
			{
				count = 0;
			}
			else
			{
				walked[nowRow - 1][nowCol] = true;
				nowRow -= 1;
				walk[nowRow][nowCol] = letter++;
				count--;
			}
		} break;
		case 1:
		{
			if ((nowRow + 1 > 10) || walked[nowRow + 1][nowCol] == true)
			{
				continue;
			}
			else if (ALLArrived)
			{
				count = 0;
			}
			else
			{
				walked[nowRow + 1][nowCol] = true;
				nowRow += 1;
				walk[nowRow][nowCol] = letter++;
				count--;
			} break;
		}
		case 2:
		{
			if ((nowCol - 1 < 0) || walked[nowRow][nowCol - 1] == true)
			{
				continue;
			}
			else if (ALLArrived)
			{
				count = 0;
			}
			else
			{
				walked[nowRow][nowCol - 1] = true;
				nowCol -= 1;
				walk[nowRow][nowCol] = letter++;
				count--;
			} break;
		}
		case 3:
		{
			if ((nowCol + 1 > 10) || walked[nowRow][nowCol + 1] == true)
			{
				continue;
			}
			else if (ALLArrived)
			{
				count = 0;
			}
			else
			{
				walked[nowRow + 1][nowCol] = true;
				nowCol += 1;
				walk[nowRow][nowCol] = letter++;
				count--;
			} break;
		}
		default:
			break;
		}
	}
}

void print_array(char walk[10][10])
{
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			printf("%c ", walk[i][j]);
		}
		printf("\n");
	}
}

int _3rdCode()
{
	bool arrived[10][10];
	char map[10][10];
	generate_random_walk(map[0][0], arrived[0][0]);
	print_array(map[0][0]);
	return 1;
}

void read_word(int counts[26])
{
	char ch = 65;
	ch = getchar();
	while ((ch = getchar()) != '\n')
	{
		ch = tolower(ch);
		counts[(ch - 'a') < 0 ? 0 : (ch - 'a')] += 1;
	}
}

bool equal_arry(int counts1[], int counts2[])
{
	for (int i = 0; i < 26; i++)
	{
		if (counts1[i] - counts2[i] > 0)
		{
			return false;
		}
		else if (i == 25)
		{
			return true;
		}
	}
}

int _4thCode()
{
	int counts1[26], counts2[26];
	printf("Enter frist word:");
	read_word(counts1);
	printf("Enter sencond word:");
	read_word(counts2);
	if (equal_arry(counts1,counts2))
	{
		printf("The words are not anagrams.");
	}
	else
	{
		printf("The words are anagrams.");
	}
	return 1;
}

void create_magic_square(int n, char magic_square[99][99])
{
	int x = 0, y, next_x, next_y;
	y = n / 2;
	magic_square[x][y] = 1;
	for (int i = 2; i <= n * n; i++)
	{
		next_x = (x - 1 + n) % n;
		next_y = (y + 1 + n) % n;

		if (magic_square[next_x][next_y])
		{
			x = x + 1;
		}
		else 
		{
			x = next_x;
			y = next_y;
		}
		magic_square[x][y] = i;
	}
}

void print_magic_square(int n, char magic_square[99][99])
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			printf("%4d", magic_square[i][j]);
		}
		printf("\n");
	}
}

int _5thCode()
{
	int n;
	printf("Enter size of magic square : ");
	scanf("%d", &n);
	int matrix[99][99] = { 0 };
	create_magic_square(n, matrix);
	print_magic_square(n, matrix);
	return 1;
}

int computeX(int m, int x, int n)
{
	int res = 1;
	for (int i = 0; i < n; i++)
	{
		res *= x;
	}
	return m * res;
}

int _6thCode()
{
	printf("Enter x:");
	int x, n = 5, result = 0;
	int m[6] = { 3, 2, -5, -1, 7, -6 };
	scanf("%d", &x);
	for (int i = 0; i < 6; i++)
	{
		result += computeX(m[i], x, n--);
	}
	printf("Result is:%d", result);
	return 1;
}

int power(int x, int n)
{
	if (n % 2)
	{
		return n == 0 ? 1 : power(x, n - 1);
	}
}

int _7thCode()
{
	printf("enter n:");
	int n, x, result;
	scanf("%d %d", &x, &n);
	result = power(x, n);
	printf("%d", result);
	return 1;
}

int _8thCode()
{
	return 1;
}
