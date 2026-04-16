#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		long long int a, b;
		scanf("%lld %lld", &a, &b);
		printf("%lld\n", a + b);
	}
}