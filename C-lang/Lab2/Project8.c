#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
    float radius;
	float area;
	float diameter;
	float circumference;
	printf("Please enter the radius of the circle= ");
	scanf("%f",&radius);
	area = 3.14 * radius * radius;
	printf("Radius = %f\n", area);
	diameter = 2 * radius;

	printf("Diameter= %f\n", diameter);
	circumference = 2 * 3.14 * radius;
	printf("Circumference= %f", circumference);

	return 0;
}