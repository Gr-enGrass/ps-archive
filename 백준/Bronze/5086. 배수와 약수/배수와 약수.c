#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() 
{
	int a, b;
	scanf("%d %d", &a, &b);
	while (a != 0 && b != 0)
	{
		if (b % a == 0)
			printf("factor\n");
		else if (a % b == 0)
			printf("multiple\n");
		else
			printf("neither\n");
		scanf("%d %d", &a, &b);
	}
}