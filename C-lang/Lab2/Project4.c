#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int num;
	int difference;
	int digit1, digit2, digit3, digit4, digit5;
	printf("Enter the first number of series= ");
	scanf ("%d",&num);
	printf("Enter the difference in consective numbers= ");
	scanf ("%d",&difference);
	digit1 = num;
	digit2 = num + 3;
	digit3 = digit2 + 3;
	digit4 = digit3 + 3;
	digit5 = digit4 + 3;
	printf("The First five number of the series are:%d, %d, %d, %d,%d", digit1, digit2, digit3, digit4, digit5);
	return 0;
}