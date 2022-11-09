#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	char character;
	char ch;
	do
	{

		printf("Please enter a character:");
		scanf("%c", &character);
		getchar();
		if ((character >= 48) && (character <= 57))
		{
			printf("It is a digit!\n");

		}
		else if ((character >= 65) && (character <= 90))
		{
			printf("It is a capital alphabet!\n");

		}
		else if ((character >= 97) && (character <= 122))
		{
			printf("It is a small alphabet!\n");

		}
		else
		{
			printf("It is some other character!\n");

		}
		printf("Do you want to enter again(Y/N): ");
		scanf("%c", &ch);
		getchar();

	} while (ch == 'Y');


	return 0;
}