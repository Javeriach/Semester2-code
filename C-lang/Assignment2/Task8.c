							//Javeria kanwal
							//Bitf21m519
							//Bsit
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
 //printing the first function
int takingNumberOfEmplooyes()
{
	int emplooye;

	printf("Please entert the number of emplyooes: ");
	scanf("%d", &emplooye);
	while(emplooye< 1)
	{
		printf("Invalid Input\n");
		printf("Please enter the number of employes in positive integers:  ");
		scanf("%d", &emplooye);
	}
	return emplooye;
}// second function for taking number of Off days for each employee
int numberOfDays( int noOfEmplooes)
{
	int days , sumOfDays=0;
	for (int i = 1; i <= noOfEmplooes; i = i + 1)
	{
		printf("Please enter the number of OFF days  for employee %d:   ", i);
		scanf("%d",& days);
		while(days < 0)
		{
			printf("Invalid Input\n");
			printf("Please enter the number of OFF days  for employee %d  in positive integers:  ",i);
			scanf("%d", &days);
		}
		sumOfDays = sumOfDays + days;

	}
	return sumOfDays;
}
//funtion for taking avarage
float funAverage(int a, int b)
{
	float  avarg = b / a;
	return avarg;
}
// main function for calling functions
int main()
{
	int totalEmployes;
	int totalDays;
	float average;

	totalEmployes=takingNumberOfEmplooyes();
	totalDays = numberOfDays(totalEmployes);
	average = funAverage(totalEmployes, totalDays);

	printf("The total number of employes: %d \n", totalEmployes);
	printf("The total number of days: %d\n ", totalDays);
	printf("The average is =%lf", average);
	return 0;

}