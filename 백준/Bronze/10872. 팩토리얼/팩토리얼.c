#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int fact(int a)
{
	int sum=1;
	for (int i = 1; i <= a; i++)
	{
		sum *= i;
	}
	return sum;
}

int main()
{
	int N;
	scanf("%d", &N);
	printf("%d", fact(N));
}	