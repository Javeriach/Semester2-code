							//Javeria Kanwal
							//BITF21M519
							//bSIT

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int heightOfWindow;
	int wwidth;
	printf("Please enter the height for drawing the pattern:");
	scanf("%d", &heightOfWindow);

	//while loop for checking validation of height

	while (heightOfWindow % 2 != 0 || heightOfWindow < 4)
	{
		printf("Invalid input\n");
		printf("Please enter the height again:");
		scanf("%d", &heightOfWindow);
	}

	//taking the input from user for width

	printf("Please enter the width:");
	scanf("%d", &wwidth);

	//checking the validity of entered width
	while (wwidth % 2 != 0 || wwidth < 6)
	{
		printf("Invalid input\n");
		printf("Please enter the width again:");
		scanf("%d", &wwidth);
	}


	//process to draw the pattern
	for (int k = 1; k <= heightOfWindow; k++)
	{
		for (int j = 1; j <= wwidth; j++)
		{
			if (k == 1 || k == heightOfWindow || j == 1 || j == wwidth)
			{
				
			printf("*");

			}
					
			else
			{
						printf(" ");
			}
		}
				printf("\n");
	}
			return 0;
}