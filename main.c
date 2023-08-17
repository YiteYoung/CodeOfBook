#include "charter3Test.h"

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
		/*case 7: flag = _7thCode(); break;
		case 8: flag = _8thCode(); break;*/
		case 886: flag = 0; break;
		default: printf("Number error,please enter again");
			break;
		}
	}
	return 0;
}
