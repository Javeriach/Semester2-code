#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void printfAddressvalue(const char* ch, int size)
{
	
	for (int i = 0; *(ch+i)!='\0'; i++)
	{
		printf( "The addres of %c is %p\n ", *(ch+i),ch);
	}
}
int main()
{
	char chr[10] = { 'J','a','v','e','r','i','a','\0' };
	printfAddressvalue(chr,3);
	return 0;
	
}