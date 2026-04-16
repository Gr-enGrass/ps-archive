#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	long long int n, m,a;
	scanf("%lld %lld", &n, &m);
	a = n - m;
	if (a < 0)
		a = -a;
	printf("%lld", a);
}