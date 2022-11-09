#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	float rp;
	float  da;
	float sa;
	printf("Regular Price = ");
	scanf("%f",&rp);
	da = rp * .2;
	printf("Discount amount=%f\n", da);
	sa = rp - da;
	printf("Sale tax= %f\n", sa);
	return 0;
}