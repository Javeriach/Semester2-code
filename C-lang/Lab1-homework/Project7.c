#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	char alphabet;
	printf("Enter any alphabet (a-z) in lower case= ");
	scanf("%c", &alphabet);
	alphabet = alphabet - 32;
	printf("In upper case it is =%c", alphabet);
	return 0;
}


