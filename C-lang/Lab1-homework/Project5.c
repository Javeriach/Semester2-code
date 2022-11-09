#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	float amount;
	float federal;
	float Provincial;
	float total;
	printf("Please enter the amount of a purchase : ");
	scanf ("%f",&amount);
	printf("The amount of purchase is : %f\n", amount);
	federal = amount * 6 / 100;
	printf("The amount of the federal sale tax is : %f\n", federal);
	Provincial = amount * 4 / 100;
	printf("The amount of the provincial sale tax is : %f\n", Provincial);
	total = federal + Provincial;
	printf("The amount of the total sale tax is : %f ", total);
	return 0;
}