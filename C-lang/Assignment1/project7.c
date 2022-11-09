#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{

	int LCM = 0, numb1, numb2, res;
	printf(" Please Enter first number : ");
	scanf("%d", &numb1);
	while (numb1 < 0)
	{
		printf("Invalid\n");
		printf("Again enter the first number : ");
		scanf("%d", &numb1);
	}
	printf(" Please Enter second number: ");
	scanf("%d", &numb2);
	while (numb2 < 0)
	{
		printf("Invalid input\n");
		printf("Agin enter second number : ");
		scanf("%d", &numb2);
	}
	for (int i = 1; i <= numb2; i++)
	{
		if (numb1 % i == 0 && numb2 % i == 0)
		{
			LCM = i;
		}
		
	}
	
	res = (numb1 * numb2) / LCM;
	printf("The LCM of number is : %d", res);
	return 0;
}