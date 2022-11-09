#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int n1, n2,  n3 = 0, n4 = 0, sum = 0, remainder = 0;

	int rem, i = 1;
	int rem1 = 0;
	int plus = 0;
	int realNumber1, realNumber2;
	printf("enter the first numb :");
	scanf("%d", &n1);
	while (n1 < 0)
	{
		printf("Invalid Input!!!\nAgain enter first numb : ");
		scanf("%d", &n1);
	}
	printf("enter the second numb:");
	scanf("%d", &n2);
	while (n2 < 0)
	{
		printf("Invalid Input!!!\n Again Enter second numb : ");
		scanf("%d", &n2);
	}
	realNumber1 = n1;
	realNumber2 = n2;
	while (n1 != 0 )
	{
		n3 = n1 % 10;
		n1 = n1 / 10;
		n4 = n2 % 10;
		n2 = n2 / 10;
		remainder = n3 + n4;			//remainder =sum of two modulus numbers	//addition of two modulus numbers
		rem = remainder % 10;
		remainder = remainder / 10;     //1---4(has been taken)
	
		sum = (rem + rem1);				//SUM=4+0

		sum = plus + (sum * i);				//0+(4*1)
		plus = sum;				//PLUS=4
		i = i * 10;
		rem1 = remainder;
	}
	remainder = n1 + n2;
	rem = remainder % 10;
	remainder = remainder / 10;
	sum = (rem + rem1);

	sum = plus + (sum * i);
	i = i * 10;
	plus = sum;
	sum = plus + (remainder * i);

	printf("  %d\n+  %d\n----------\n  %d", realNumber1, realNumber2, sum);

	return 0;
}