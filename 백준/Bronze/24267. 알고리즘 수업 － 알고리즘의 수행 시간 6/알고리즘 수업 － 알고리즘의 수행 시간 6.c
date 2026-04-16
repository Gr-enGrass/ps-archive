#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>

int main()
{
	int n;
	scanf("%d", &n);

	printf("%lld\n", (((long long int)n*(n-1)*(n-2)))/6);
	printf("3");
}