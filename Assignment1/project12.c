#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int size;
	int k=0;
	printf("Please enter size :");
	scanf("%d", &size);
	while (size < 3 || size % 2 == 0)
	{
		printf("Invalid input\n");
		printf("Please enter size again:");
		scanf("%d", &size);
	}
   k = (size + 1) / 2;
	for (int i = 1; i <= k; i++)
	{
		for (int space = 1; space <=( k - i); space++)//upper part
		{
			printf(" ");
        }
		for (int j = 1; j <=(i*2-1); j++)
		{
			printf("*");
		}
		printf("\n");
		
	}
	

	
	for (int i = 1; i <= k; i++)
	{
		for (int space = 1; space <= i; space++)
		{
			printf(" ");
		}
		for (int j = 1; j <= 2*(k -i) -1; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}