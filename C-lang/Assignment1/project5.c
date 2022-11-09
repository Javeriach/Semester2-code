#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int num;
	int count = 0;
	printf("Please enter the positive integer:");
	scanf("%d", &num);
	while (num < 0)
	{
		printf("Invalid Input!\n");
		printf("Please enter the positive integer again:");
		scanf("%d", &num);
	}
	for (int i = 1; i <= num; i++)
	{
		if (num % i == 0)
		{
			count = count++;
		
		}
	}

	if (count == 2)
	{
		printf("%d is a prime number.", num);

	}
	else
	{
		printf("%d is not a prime number.", num);
	}
	return 0;
}