//Javeria Kanwal
//Bitf21m519
//Task6(lab-10)

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//function for the storing sum of two aray to 3rd array by pointer notaion
void arrySum(const int *a1, const int *a2,int *sum, int size)
{
	for (int i = 0; i < size; i++)
	{
		//storing the 
		*(sum + i) = *(a1 + i) + *(a2 + i);
	}
}

int main()
{
	int a1[5]={0};
	int a2[5]={0};
	int a3[5]={0};
	//taking input of first and second array
	printf("     ------First arry-----\n");
	for (int i = 0; i<5; i++)
	{
		printf("Enter an integer at the position %d:", i);
		scanf("%d",&a1[i]);
	}
	printf("     -----Second arry-----\n");

	for (int j = 0; j<5; j++)
	{
		printf("Enter an integer at the position %d:", j);
		scanf("%d", &a2[j]);
	}
	//printing first and second array
	printf("    ------printing  of first arry-----\n");
	for (int k= 0; k<5; k++)
	{
		printf("%d   ", a1[k]);
		
	}
	printf("\n\n ------printing of second arry-----\n\n");
	for (int m = 0;m<5; m++)
	{
		printf("%d   ", a2[m]);
	}

	printf("\n\n");
	int sum = 0;
	//printing of sum of two array
	printf("----Sum of Array1 ans Array2-----\n");
	arrySum(a1, a2, a3, 5);
	for (int n = 0; n<5; n++)
	{
		printf("%d  ", a3[n]);
	}
	printf("\n\n");
	return 0;
}