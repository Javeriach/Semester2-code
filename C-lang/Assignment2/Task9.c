							//Javeria Kanwal
							//BITF21M519
							//Bsit
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int isValid(double num, double start, double end)
{
	if ((num >= start) && (num <= end))
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
  //function for getting radius from the user
int   getRadius()
{
	int radius;
	printf("Please enter the radius of the circle: ");
	scanf("%d", &radius);
	while (!(isValid(radius, 10.0, 50.0)))
	{
		printf("Please enter the radius of the circle from the range of 10.0 to 50.0: ");
		scanf("%d", &radius);
	}
	return radius;
}
   //function for calculating area by using radius
 void calculateArea(int radius, double *area)
{
	*area = 3.14 * radius * radius;
	
}
    //function for displaying the area
void displayArea(double area)
{
	printf("The area of the circle is : %lf", area);
}
int main()
{
	int radius;
	int display;
	radius = getRadius();
	double  area = 0;
	 calculateArea(radius, &area);
	displayArea(area);
	return 0;
}