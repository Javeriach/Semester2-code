#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{

	int firstNumber;
	int secondNumber;

	int swap;
	printf ("Enter first number :  ");
	scanf ("%d",&firstNumber);
	printf("Enter second number:  ");
	scanf ("%d",&secondNumber);

	swap = firstNumber;
	firstNumber = secondNumber;
	secondNumber = swap;
	printf("after swaping\n");
	printf("First number=%d \n", firstNumber);
	printf("Second number=%d", secondNumber);
	return 0;
}