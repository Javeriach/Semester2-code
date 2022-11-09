						//JAVERIA kANWAL
						//BITF21M519
						//BSIT(2021-2025)
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{			//Initialization of the used variables
	int num, ans = 1;
	//printing the for takinh the input from user
	printf("Please enter the number: ");
	scanf("%d", &num);
	while (num < 0)
	{
		printf("Invalid Input");
		printf("Please enter the integer again:  ");
		scanf("%d", &num);
	}
	printf("       ");
	//processing

	//processing for printing the first horizontal line
	for (int firstLine = 1; firstLine <= num; firstLine = firstLine + 1)
	{
		
		printf(" %3d", firstLine);

	}
	printf("\n");
	
	printf("      +------------------------------------------------------------\n");
	//printing the vertical line and whole table
	for (int verticalLine = 1; verticalLine <= num; verticalLine = verticalLine + 1)
	{
		
		printf("  %2d  |", verticalLine);
		
		for (int innerLoop = 1; innerLoop <= num; innerLoop = innerLoop + 1)
		{
			
			ans = verticalLine * innerLoop;
			printf("%4d", ans);
		}
		printf("\n");
	}
	return 0;

	
	
}