#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		for (int j = n; j-i > 0; j--)
		{
			printf("*");
		}
		printf("\n");
	}
}
