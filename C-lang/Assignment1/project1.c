#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int firstNum;
	int secondNum;
	int product = 0;
	int i = 1;
	printf("Please enter first integer:");
	scanf("%d", &firstNum);
	
	while (firstNum < 0)
	{
		printf("Invalid Input:\n");
		printf("Please enter first integer again:");
		scanf("%d", &firstNum);
	}
	printf("Please enter second integer:");
	scanf("%d", &secondNum);
	while (secondNum < 0)
	{
		printf("Invalid Input:\n");
		printf("Please enter second integer again:");
		scanf("%d", &secondNum);

	}
	
	while (i <= secondNum)
	{
		product = product + firstNum;
		i = i + 1;
	}
	printf("Product is !!!!!!:%d", product);
	return 0;
}