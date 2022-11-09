						//Javeria Kanwal
						//BITF21M519
						//BSIT(2021-2025)
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{

		
	    int num;
		int l = 0;
		printf("Please enter thr dimesntions: ");
		scanf("%d", &num);
		for (int i = 1; i <= num; i++)
		{
			for (int j = 1; j < i; j++)
			{
				printf("0");
			}
			for (int m = 1; m <= num - l; m++)
			{
				printf("1");
				
			}
			l = l + 1;
			
			printf("\n");
		}
		
		
	
	return 0;
}