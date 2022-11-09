#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void readThemAll(const int *p, int num1, int num2)
{
	//decalration of the variables
	int j=-1;
	int l = 0;

	for (int i = 0; i < 20; i++)
	{
		//here if condion is true then j is greater than 0 and while condition
 // will be true 
		if (  *(p + i) == num1 )
		{
			j = j * -1;
			j = j + i;
			
				
		}
  
		while ( *(p + i) != num1   &&   (  j > 0 ) )
		{
			
			
			     
			if ( *(p + j) != num2)
			{
				printf("%d  ", *(p + j));
				
			}
			else
			{
				//when number become equal to last integer then the
				// we place j=-1 to false the while condition
				j = -1;
			}
			j++;
			
		}
	
	}
}
int main()
{
	//declaring the array of size 20
	int t[20] = { 0,30,54,6,85,9,11,33,88,14,16,38,19,29,22,16,40,34,26,50};
	int n1, n2;
	for (int i = 0; i<20; i++)
	{
		printf("%d  ", t[i]);
	}
	//for taking input of the  first ans last  integer 
	printf("\nPlese enter the starting number of the series you want to print:");
	scanf("%d", &n1);
	printf("\nPlese enter the last number of the series you want to print:");
	scanf("%d", &n2);

	
	//passing the address of the first element of the arry to the function
	readThemAll(t, n1, n2);
	return 0;
}