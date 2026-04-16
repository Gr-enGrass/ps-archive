#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

long long int at_sign (long long int a, long long int b)
{
	return (a + b) * (a - b);
}

int main()
{
	int a, b;
	scanf("%d %d", &a, &b);
	printf("%lld", at_sign(a, b));
}