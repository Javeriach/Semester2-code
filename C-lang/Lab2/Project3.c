#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int seconds;
	int minutes;
	printf("Enter seconds:  ");
	scanf("%d", &seconds);
	printf("Its equal to \n");
	minutes = seconds / 60;
	seconds = seconds % 60;
	printf("Minutes= %d\n", minutes);
	printf("Seconds= %d", seconds);
	return 0;
}