#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<string.h>

int main()
{
	int sum = 0,A;
	for (int i = 0; i < 5; i++)
	{
		scanf("%d", &A);
		sum += A;
	}
	printf("%d", sum);
}