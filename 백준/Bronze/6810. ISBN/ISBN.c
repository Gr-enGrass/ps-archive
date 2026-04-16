#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a, b, c;

	int sum = 91;
	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);

	sum += a + b * 3 + c;
	printf("The 1-3-sum is %d", sum);
}