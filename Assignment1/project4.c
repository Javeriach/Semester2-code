#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{

	int n1, n2, rem1 = 0, rem2 = 0, addition = 0;  
	int carry = 0, base = 1, sum = 0, numb1, numb2;

	printf("enter first binary number : ");
	scanf("%d", &n1);

	printf("enter second binary number : ");
	scanf("%d", &n2);
	numb1 = n1;
	numb2 = n2;

	while (n1 > 0 || n2 > 0 || carry != 0)
	{
		rem1 = n1 % 10;
		n1 = n1 / 10;
		rem2 = n2 % 10;
		n2 = n2 / 10;
		sum = carry + rem1 + rem2;

		if (sum == 0)
		{
			sum = 0;
			carry = 0;
		}
		else if (sum == 1)
		{
			sum = 1;
			carry = 0;
		}
		else if (sum == 2)
		{
			sum = 0;
			carry = 1;
		}
		else if (sum == 3)
		{
			sum = 1;
			carry = 1;
		}

		sum = addition + (sum * base);
		addition = sum;
		base = base * 10;


	}


	printf("  %d\n  +%d\n---------- \n %d", numb1, numb2, sum);
	return 0;
}