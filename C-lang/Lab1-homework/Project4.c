#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
int main()
{
	float m1;
	float m2;
	float d;
	float F;
	float k;
	k = 6.67 * pow(10, -8);


	printf("Enter value of m1 : ");
	scanf("%f", &m1);
	printf("Enter value of m2 : ");
	scanf("%f", &m2);
	printf("Enter value of distance : ");
	scanf("%f", &d);
	F = k * (m1 * m2 / d * d);

	printf("The force between two bodies  = %f", F);
	return 0;
}