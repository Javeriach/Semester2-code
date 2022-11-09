							//Javeria Kanwal
							//Bitf21m519
							//Bsit

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//first fuction for taking sales figures for division1
double getSales1(int)
{
	double saleFigur1=0;
	
	printf("Please enter the sales figure for division 1: ");
	scanf("%lf", &saleFigur1);
	while (saleFigur1 < 0.00)
	{
		printf("Invalid Input\n");
		printf("Please enter the sales figure for division 1 agan: ");
		scanf("%lf", &saleFigur1);
	}
	return saleFigur1;
}
//Second fuction for taking sales figures for division2
double getSales2(int)
{
	double saleFigur2=0;
	printf("Please enter the sales figure for division 2: ");
	scanf("%lf", &saleFigur2);
	while (saleFigur2 < 0.00)
	{
		printf("Invalid Input\n");
		printf("Please enter the sales figure for division 2  again: ");
		scanf("%lf", &saleFigur2);
	}
	return saleFigur2;
}
//third fuction for taking sales figures for division3th
double getSales3(int)
{
	double saleFigur3=0;
	printf("Please enter the sales figure for division 3: ");
	scanf("%lf", &saleFigur3);
	while (saleFigur3 < 0.00)
	{
		printf("Invalid Input\n");
		printf("Please enter the sales figure for division 3 again: ");
		scanf("%lf", &saleFigur3);
	}
	return saleFigur3;
}
//fourth fuction for taking sales figures for division4th
double getSales4(int)
{
	double saleFigur4=0;
	printf("Please enter the sales figure for division 4: ");
	scanf("%lf", &saleFigur4);
	while (saleFigur4 < 0.00)
	{
		printf("Invalid Input\n");
		printf("Please enter the sales figure for division 4 again: ");
		scanf("%lf", &saleFigur4);
	}
	return saleFigur4;
}

int main()
{ 
	//decalratin of sales
	double  sale1, sale2, sale3, sale4;
	//calling of functions for assigning values to sales
	sale1 = getSales1(1);
	sale2 = getSales2(2);
	sale3 = getSales3(3);
	sale4 = getSales4(4);
	
	//Whole process for checkling which one is the largest salefigure
	if ((sale1 > sale2) && (sale1 > sale3) && (sale1 > sale4))
	{
		printf("Division1 has the greatest sales for a quarter and it has sale figure  : %lf", sale1);
	}
	 else if ((sale2 > sale1) && (sale2 > sale3) && (sale2 > sale4))
	{
		printf("Division2 has the greatest sales for a quarter and it has sale figure : %lf", sale2);
	}
	else if ((sale3 > sale1) && (sale3 > sale2) && (sale3 > sale4))
	{
		printf(" Division3 has the greatest sales for a quarter and it has sale figure   : %lf", sale3);
	}
	else if ((sale4 > sale1) && (sale4 > sale3) && (sale4 > sale2))
	{
		printf("Division4 has the greatest sales for a quarter and it has sale figure  : %lf", sale1);
	}
	return 0;

}