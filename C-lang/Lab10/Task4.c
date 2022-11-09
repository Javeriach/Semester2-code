#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void upperCase(char* ch)
{
	char* p;
	p = ch;
	for (int i = 0; *(p+i)!='\0'; i++)
	{
		
		
			*(p + i) = *(p + i) - 32;
			printf("%c", *(p+i));
	}
	
}

int main()
{
	char arr[10] = "javeria";
	upperCase(arr);
	return 0;
}