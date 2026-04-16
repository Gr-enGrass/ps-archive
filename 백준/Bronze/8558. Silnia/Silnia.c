#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main()
{
	int n, fact = 1;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++)
	{
		fact *= i;
		fact %= 10;
	}
	printf("%d", fact);
}