#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int dividend;
	int divisor;
	int q = 0;
	int r;
	printf("Please enter dividend:");
	scanf("%d", &dividend);

	while (dividend < 0)
	{
		printf("Invalid Input:\n");
		printf("Please enter first integer again:");
		scanf("%d", &dividend);
	}
	printf("Please enter divisor:");
	scanf("%d", &divisor);
	while (divisor < 0 || divisor>dividend)
	{
		printf("Invalid Input:\n");
		printf("Please enter divisor again:");
		scanf("%d", &divisor);
	}
	while (dividend >= divisor)
	{
		dividend = dividend - divisor;
		q = q + 1;
	}
	printf("Quotient = %d\n", q);
	printf("Remainder = %d\n", dividend);
	return 0;
}