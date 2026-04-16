#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char str[4];
	char temp;
	scanf("%s", str);

	temp = str[0];
	str[0] = str[2];
	str[2] = temp;

	printf("%s", str);
}