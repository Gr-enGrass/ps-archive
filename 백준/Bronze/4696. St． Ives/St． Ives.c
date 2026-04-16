#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	double n;
	while (1)
	{
		scanf("%lf", &n);
		if (n == 0)break;
		
		printf("%.2f\n", 1 + n+n * n + n * n * n + n * n * n * n);
	}
}
