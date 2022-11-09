#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int num;
	int digit1, digit2, digit3;

	printf("Enter a 3-digit positive integer: ");
	scanf("%d", &num);
	digit1 = num % 10;
	num = num / 10;
	//second digit
	digit2 = num % 10;
	num = num / 10;
	//third digit
	digit3 = num % 10;
	num = num / 10;

	printf("Its reverse is:%d%d%d", digit1, digit2, digit3);
	return 0;
}