#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {


	int kilometer;
	int petrol;
	float KMPL;
	printf("Please enter the number of kilometers driven : ");
	scanf ("%d",&kilometer);
	printf("Please enter the liter of petrol used : ");
	scanf ("%d",&petrol);
	KMPL = kilometer / petrol;
	printf("KMPL of the car-162 : %f", KMPL);
	return 0;

}