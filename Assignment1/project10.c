#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
int main()
{
	int n1, d1, count = 1;		

	printf("Enter First number of series 1: ");
	scanf("%d", &n1);				//NUM1---->6

	printf("Enter the difference of series 1: ");
	scanf("%d", &d1);  //NUM2---->2

	int temp1;				//temprey variable    temp=6

	temp1 = n1;			//num1 is stored in tempory variable

	while (count <= 10)
	{
		printf("%d, ", n1);
		n1 = n1 + d1;					//num2 add to num1			6+2=num1
		count++;
	}

	int n2, d2, counter = 1; 	

	printf("\nEnter first number of series 2: ");
	scanf("%d", &n2);

	printf("Enter the difference of series 2: ");
	scanf("%d", &d2);

	int temp2; 
	temp2 = n2;

	while (counter <= 10)
	{
		printf("%d, ", n2);
		n2 = n2 + d2;
		counter++;
	}

	int num = 0, i = 1, crossNum = 0, index = 0;	

	printf("\nEnter any number from series 1: ");
	scanf("%d", &num);

	if (num == temp1)
	{
		printf("\nThe corresponding number is: %d", temp2);
	}

	else {

		index = num - temp1; 	 
		// number entered
		index = index / d1;

		crossNum = temp2 + d2;

		while (i < index)
		{
			crossNum = crossNum + d2;
			i++;
		}

		printf("The corresponding number is: %d", crossNum);

	}
	return 0;
}