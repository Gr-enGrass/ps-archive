#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	int R1;
	int S;

	scanf("%d %d", &R1, &S);
	printf("%d", S * 2 - R1);
}