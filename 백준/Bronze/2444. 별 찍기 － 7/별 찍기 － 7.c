#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int abs(int a)
{
	if (a < 0)
		a = -a;
	return a;
}

int main() 
{
	int n;
	scanf("%d", &n);

	for (int i = 0; i < 2 * n - 1; i++)
	{
		for (int j = 0; j < abs(n - i - 1); j++)
		{
			printf(" ");
		}
		for (int k = 0; k < 2*(n-abs(n-i-1))-1; k++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}