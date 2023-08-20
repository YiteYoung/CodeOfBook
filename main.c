#include "charter8Test.h"

int main()
{
	int codeNumber;
	int flag = 1;
	while (flag)
	{

		printf("\nEnter NO. of code or 886 to exit:");
		scanf("%d", &codeNumber);
		switch (codeNumber)
		{
		case 1: flag = _1stCode(); break;
		case 2: flag = _2ndCode(); break;
		case 3: flag = _3rdCode(); break;
		case 4: flag = _4thCode(); break;
		case 5: flag = _5thCode(); break;
		case 6: flag = _6thCode(); break;
		case 7: flag = _7thCode(); break;
		case 8: flag = _8thCode(); break;
		case 9: flag = _9thCode(); break;
		case 10: flag = _10thCode(); break;
		case 11: flag = _11stCode(); break;
		case 12: flag = _12ndCode(); break;
		case 13: flag = _13rdCode(); break;
		case 14: flag = _14thCode(); break;
		case 15: flag = _15thCode(); break;
		//case 16: flag = _16thCode(); break;
		//case 17: flag = _17thCode(); break;
		//case 18: flag = _18thCode(); break;
		//case 19: flag = _19thCode(); break;
		//case 20: flag = _20thCode(); break;
		
		case 886: flag = 0; break;
		default: printf("Number error,please enter again");
			break;
		}
	}
	return 0;
}
