#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{

	int startNum, endNum;
	printf("Please enter starting integer:");
	scanf("%d", &startNum);
	printf("Please enter ending integer:");
	scanf("%d", &endNum);

	//start=1--------end=5
	//					2----4
	for (int i = 0; startNum <= endNum; i = i + 1)
	{
			//J=1                
		for (int j = startNum; j <= endNum; j = j + 1)
		{
			printf("(%d,%d)", startNum, j);
		}
		endNum = endNum - 1;
		startNum = startNum + 1;
		printf("\n");
	}
}
