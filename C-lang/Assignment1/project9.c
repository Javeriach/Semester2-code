#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int rollNo;
	int noOfSem;
	double gpa =0.0;
	double totalSum =0;
	int a = 12;
	int creditHours = 0;
	float cgpa = 0;
	printf("Please enter the roll number :");
	scanf("%d", &rollNo);
	while (rollNo <= 0)
	{
		printf("Invalid Input\n");
		printf("Enter your roll number again:");
		scanf("%d", &rollNo);
	}
	printf("Enter number of semesters:");
	scanf("%d", &noOfSem);
	while (noOfSem < 1 || noOfSem >8)
	{
		printf("Invalid Input\n");
		printf("Enter number of semesters again:");
		scanf("%d", &noOfSem);
	}
	
	
	for (int i = 1; i <= noOfSem; i++)
	{
		
		printf("Enter your semester %d GPA :" ,i);
		scanf("%lf", &gpa);
		while (gpa < 0 || gpa>4)
		{
			printf("Invalid input\n");
			printf("Enter your semester %d GPA again:", i);
			scanf("%lf", &gpa);
		}
		gpa = gpa * a;
		totalSum = totalSum + gpa;
		creditHours = creditHours + a;
		a++;
		
	}

	cgpa = totalSum / creditHours;
	printf("************* Result Card*******\n");
	printf("Roll Number:%d\n" , rollNo);
	printf("CGPA is the:%lf", cgpa);
	return 0;
}