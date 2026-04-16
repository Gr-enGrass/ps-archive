#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i;
	char s[1000] = { 0 };
	
	scanf("%s", &s);

	scanf("%d", &i);

	printf("%c", s[i-1]);

	return 0;
}