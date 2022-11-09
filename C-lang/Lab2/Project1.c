#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int digit1, digit2, digit3;
	int number;
	int sum;
	printf("Please enter a 3-digit positive integer: ");
	scanf("%d", &number);
	//process of evaluating digits sperately
	//First digit
	digit1 = number % 10;
	number = number / 10;
	//First digit
	digit2 = number % 10;
	number = number / 10;
	//First digit
	digit3 = number % 10;
	number = number / 10;
	//addition of the difits
	sum = digit1 + digit2 + digit3;
	printf("The sum of digits is:%d", sum);
	return 0;
}