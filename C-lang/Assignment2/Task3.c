			//Javeria Kanwal
			//BITF21M519
			//BSIT(2021-2025)
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int width, length;
	//taking input from user for height
	printf("Please enter the length of the rectangle: ");
	scanf("%d", &length);
	//checking validation for leght 'less then 4 and must be even
	while ((length < 3)  || (length % 2 == 0))
	{
		printf("Invalid Input\n");
		printf("Please enter the length of the rectangle again: ");
		scanf("%d", &length);
	}
	//taking input for width
	printf("Please enter the width of the rectangle: ");
	scanf("%d", &width);
	//checking validation for width 'less then 5 and must be even
	while ((width < 5)  || (width % 2 == 0))
	{
		printf("Invalid Input\n");
		printf("Please enter the width of the rectangle again: ");
		scanf("%d", &width);;
	}
	//processing
	int l = 0;
	for (int k = 1; k <= length; k++)
	{
		if (k % 2 != 0)
		{

			for (int i = 1; i <= width - l; i++)
			{
				printf("*");
			}
		}
		else
		{
		      for (int m = 1; m <= width; m++)
			     {
			          if (m % 2 != 0)
			          {
				           printf("+");
			           }
			     else
			     {
				printf(" ");
			     }
				

			  }
		}
		printf("    \n");
	}

	return 0;
}