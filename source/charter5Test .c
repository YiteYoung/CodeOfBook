#include "charter5Test.h"

int _1stCode()
{
	printf("Enter a number:");
	int num, temp, result = 0;
	scanf("%d", &num);
	temp = num;
	while (temp)
	{
		temp /= 10;
		result++;
	}
	printf("The number %d has %d digits", num, result);
	return 1;
}

int _2ndCode()
{
	printf("Enter a 24-hour time:");
	int h24, m24;
	scanf("%d:%d", &h24, &m24);
	if (h24 > 12 && h24 < 24)
	{
		h24 = h24 - 12;
		printf("Equivalent 12-hour time:%d:%d PM", h24, m24);
	}
	else
	{
		printf("Equivalent 12-hour time:%d:%d AM", h24, m24);
	}
	return 1;
}

#define value (num * price)

int _3rdCode()
{
	printf("Enter number:");
	float num, price, commission, competitor;
	scanf("%f", &num);
	printf("Enter price:");
	scanf("%f", &price);
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
	if (num < 2000)
	{
		competitor = num * 33 + 3;
	}
	else
	{
		competitor = num * 33 + 2;
	}
	printf("Result is %.2f, Competitor is %.2f", commission, competitor);
	return 1;
}

int _4thCode()
{
	printf("Enter speed:");
	float speed;
	int flag = 0;
	char description[6][20] = { {"Clam(无风)"}, {"Light air(轻风)"}, {"Breeze(微风)"},
								{"Gale(大风)"}, {"Storm(暴风)"}, {"Hurricane(飓风)"} };
	scanf("%f", &speed);
	if (speed < 1)
		flag = 0;
	else if (1 <= speed && speed <= 3)
		flag = 1;
	else if (4 <= speed && speed <= 27)
		flag = 2;
	else if (28 <= speed && speed <= 47)
		flag = 3;
	else if (48 <= speed && speed <= 63)
		flag = 4;
	else if (speed > 63)
		flag = 5;
	printf("%s", description[flag]);
	return 1;
}

int _5thCode()
{
	printf("Enter income:");
	float income, tax;
	scanf("%f", &income);
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
	printf("Your tax is:%.2f", tax);
	return 1;
}

int _6thCode()
{
	printf("Enter the frist 12 digits of a UPC:");
	int num[12];
	scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &num[0], &num[1], &num[2],
		&num[3], &num[4], &num[5], &num[6], &num[7], &num[8], &num[9], &num[10], &num[11]);
	int resnum[2] = { 0 };
	for (int i = 0; i < 11; i++)
	{
		int j = 0;
		if (i % 2 == 0)//偶数项累加存放于num[1]
			j = 1;
		resnum[j] += num[i];
	}
	if (9 - (((3 * resnum[1]) + resnum[0] - 1) % 10) == num[11])
	{
		printf("VALID");
	}
	else
	{
		printf("NOT VALID");
	}
	return 1;
}

int _7thCode()
{
	printf("Enter four integers:");
	int num[4], max, min, temp = 0;
	scanf("%d %d %d %d", &num[0], &num[1], &num[2], &num[3]);
	max = num[0];
	min = max;
	for (int i = 3; i >= 0; i--)
	{
		for (int j = 0; j < i; j++)
		{
			if (3 - i == 4 - i)
			{
				continue;
			}
			if (num[3 - i] > num[4 - i + j])
			{
				max = num[3 - i] > max ? num[3 - i] : max;
				min = num[4 - i + j] < min ? num[4 - i + j] : min;
			}
			else
			{
				min = num[3 - i] < min ? num[3 - i] : min;
				max = num[4 - i + j] > max ? num[4 - i + j] : max;
			}
		}
	}
	printf("Largest:%d\nSmallest:%d", max, min);
	return 1;
}

#define MINTIME(x,y) (x) * 60 + (y)

int _8thCode()
{
	printf("Enter a 24-hour time:");
	int h24, m24;
	scanf("%d:%d", &h24, &m24);
	int mintues, minBis[8], min = MINTIME(24,60);
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

int _9thCode()
{
	printf("Enter first date(mm/dd/yy):");
	int mm1, dd1, yy1;
	scanf("%d/%d/%2d", &mm1, &dd1, &yy1);
	printf("Enter second date(mm/dd/yy):");
	int mm2, dd2, yy2;
	scanf("%d/%d/%2d", &mm2, &dd2, &yy2);
	if (yy1 < yy2)
	{
		printf("%d/%d/%d is earlier than %d/%d/%d", mm1, dd1, yy1, mm2, dd2, yy2);
	}
	else if (yy1 > yy2)
	{
		printf("%d/%d/%d is earlier than %d/%d/%d", mm2, dd2, yy2, mm1, dd1, yy1);
	}
	else if (mm1 < mm2)
	{
		printf("%d/%d/%d is earlier than %d/%d/%d", mm1, dd1, yy1, mm2, dd2, yy2);
	}
	else if (mm1 > mm2)
	{
		printf("%d/%d/%d is earlier than %d/%d/%d", mm2, dd2, yy2, mm1, dd1, yy1);
	}
	else if (dd1 < dd2)
	{
		printf("%d/%d/%d is earlier than %d/%d/%d", mm1, dd1, yy1, mm2, dd2, yy2);
	}
	else if (dd1 > dd2)
	{
		printf("%d/%d/%d is earlier than %d/%d/%d", mm2, dd2, yy2, mm1, dd1, yy1);
	}
	return 1;
}

int _10thCode()
{
	printf("Enter numberical grade:");
	int grade;
	scanf("%d", &grade);
	if (grade > 100 || grade < 0)
	{
		printf("Error grade");
	}
	else
	{
		switch (grade / 10)
		{
		case 1:
		case 2:
		case 3:
		case 4:
		case 5: printf("Letter grade: F"); break;
		case 6: printf("Letter grade: D"); break;
		case 7: printf("Letter grade: C"); break;
		case 8: printf("Letter grade: B"); break;
		case 9: printf("Letter grade: A"); break;
		case 10:printf("Letter grade: A"); break;
		default:break;
		}
	}
	return 1;
}

int _11stCode()
{
	int a1, a2;

	printf("Enter a two-digit number: ");
	scanf("%1d%1d", &a1, &a2);

	//先解决10-19 的数字
	if (a1 < 2) 
	{
		switch (a2) 
		{
			case 0: printf("You entered the number ten.\n"); break;
			case 1: printf("You entered the number eleven.\n"); break;
			case 2: printf("You entered the number twelve.\n"); break;
			case 3: printf("You entered the number thirteen.\n"); break;
			case 4: printf("You entered the number fourteen.\n"); break;
			case 5: printf("You entered the number fifteen.\n"); break;
			case 6: printf("You entered the number sixteen.\n"); break;
			case 7: printf("You entered the number seventeen.\n"); break;
			case 8: printf("You entered the number eighteen.\n"); break;
			case 9: printf("You entered the number nineteen.\n"); break;
		}
	}
	else {
		//十位数
		switch (a1) 
		{
			case 2: printf("You entered the number twenty"); break;
			case 3: printf("You entered the number thirty"); break;
			case 4: printf("You entered the number forty"); break;
			case 5: printf("You entered the number fifty"); break;
			case 6: printf("You entered the number sixty"); break;
			case 7: printf("You entered the number seventy"); break;
			case 8: printf("You entered the number eighty"); break;
			case 9: printf("You entered the number ninety"); break;
		}
		//个位数
		switch (a2) 
		{
			case 0: printf(".\n"); break;
			case 1: printf("-one.\n"); break;
			case 2: printf("-two.\n"); break;
			case 3: printf("-three.\n"); break;
			case 4: printf("-four.\n"); break;
			case 5: printf("-five.\n"); break;
			case 6: printf("-six.\n"); break;
			case 7: printf("-seven.\n"); break;
			case 8: printf("-eight.\n"); break;
			case 9: printf("-nine.\n"); break;
		}
	}
	return 1;
}

