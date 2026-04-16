#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>

int main()
{
	int n;
	scanf("%d", &n);

	printf("%lld\n", (n * (long long int)(n - 1) / 2));
	printf("2");
}  