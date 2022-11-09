//Javeria Kanwal
//Bitf21m519
//task 1
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
// first function to print arry
void printArry( int arry[][3])
{
	printf("\n");
	
	//loop for printing the arry
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			printf("%d  ", arry[i][j]);
		}
		printf("\n");
	}
}

//second function for printing the average of the arry
void averageFunction(int arry[][3])
{
	int sum = 0, average;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			sum = sum + arry[i][j];
		}
	}
	
	// sum of the elements of the arry by the multiplication of number of the rows 
	//with the column
	average = sum / 9;
	printf("\nAverage of the given 2d array is=%d\n\n\n", average);
}



//3rd function for printing the squarrot of sum of aquare the element of array
void squareRoot(int arry[][3])
{
	int sum = 0;
	float squraRoot;
	

	for (int i = 0; i<3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (arry[i][j] > -1)
			{
				sum = sum + (arry[i][j]) * arry[i][j] ;
			}
		}
	}
	//function of taking the squareroot of the sum of square of the elements;
	squraRoot=sqrt(sum);

	printf("\nSquraroot of the the sum of the square of the arrays: %f\n\n\n", squraRoot);
}


//function for finding the given number
int finding(int arry[][3])
{
	int num;
	int availY = 0;
	int availN = 0;
	printf("\nPlease enter the number you want to find in the given array:");
	scanf("%d", &num);

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			

			if ( num == arry[i][j])
			{
				
				availY = availY + 1;
				
			}
			else
			{
				availN = availN + 1;
			}
		}
	}
	if (availY > 0)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int main()
{
	//loop for taking input from the  user
	int arry[3][3];
	int find;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			printf("Enter any number at at the row %d col %d:",i, j);
			scanf("%d", &arry[i][j]);
		}
	}
	//printing the array
	printf("          ---First function of printing the array----");
	printArry(arry);
	printf("\n");
	//printing the average
	printf("          --- Second function of giving  the avarge of the elements array----");
	averageFunction(arry);
	printf("\n");
	//printing the squarroot    
	printf("          ---Third  function of printinf the squareRoot of sum of square of poaitive  elements the array----");
	squareRoot(arry);
	//function of finding the element
	printf("          ---fourth  function of finding the element ----");
	find=finding(arry);

	if (find == 1 )
	{
		printf("Congratualations the number has been found\n");

	}
	else if(find == 0)
	{
		printf("The number has not been found\n");
	}
	return 0;
}