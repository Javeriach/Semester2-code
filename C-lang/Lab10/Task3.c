#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void copyArry(const int *src, int *dest, int size)
{
	for (int i = 0; i<10; i++)
	{
		*(dest+i) = *(src+i);
		printf("%d ", *(dest+i));
	}
	
}
int main()
{
	int arry[10]={0};
	int arry2[11]={0};
	for (int i = 0; i < 10; i++)
	{
		printf("Please enter the number at the position %d: ", i);
		scanf("%d", &arry[i]);
		
	}
	
	copyArry(arry, arry2,10);
	return 0;
}