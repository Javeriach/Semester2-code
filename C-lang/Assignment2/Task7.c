				//Javeria Kanwal
				//Bitf21m519
				//Bsit
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<math.h>
float futureValue(float presentV, float monthlyInterestRateI, float numberOfM)
{
	float F;
	//using formula to calculate future value
	F = presentV*pow((1 + monthlyInterestRateI), numberOfM);
	return F;
}
//main function for taking input from the user
int main()
{
	int presentValue, monthlyInterestRateI, numberOfmonths;
	float fValue;
	//taking inputs
	printf("Please enter the  present value: ");
	scanf("%d", &presentValue);
	getchar();
	printf("Please enter the  monthly  interest rate: ");
	scanf("%d", &monthlyInterestRateI);
	getchar();
	monthlyInterestRateI = monthlyInterestRateI / 100;


	printf("Please enter the number of months: ");
	scanf("%d", &numberOfmonths);
	getchar();
	//calling and displaying function

	fValue = futureValue(presentValue, monthlyInterestRateI, numberOfmonths);
	printf("Future  value=  %f ", fValue);
	return 0;
}