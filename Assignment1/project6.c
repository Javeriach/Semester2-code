#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int prime(int n, int m)
{
	int count = 0;
	int add = 0;

	for (int i = 1; i <= n; i = i + 1)
	{

		if (n % i == 0)
		{

			count = count + 1;

		}

	}
	for (int i = 1; i <= m; i = i + 1)
	{

		if (m % i == 0)
		{

			add = add + 1;

		}
	}


	if ((count == 2) && (add == 2))
	{


		return printf("(%d,%d)\n", n, m);

	}
	else
	{
		return 0;
	}

}
int main()
{
	int integer;

	int ans;
	printf("Please enter the positive integer:");
	scanf("%d", &integer);
	while (integer < 0)
	{
		printf("Invalid Input!\n");
		printf("Please enter the positive integer again:");
		scanf("%d", &integer);
	}


	for (int j = 1; j <= integer; j++)
	{
		prime(j, j + 2);

	}
	return 0;
}
