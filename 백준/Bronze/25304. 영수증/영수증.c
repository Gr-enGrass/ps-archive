#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int X, N, a, b, sum;

	scanf("%d", &X);
	scanf("%d", &N);
	sum = 0;
	for (int i = 1; i <= N; ++i)
	{
		scanf("%d %d", &a, &b);
		sum =sum+(a * b);
	}
	if (sum == X)
		printf("Yes");
	else
		printf("No");
	return 0;
}