#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<string.h>

int main()
{
	int a, b, c,mid;
	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);	

	if (a > b && b > c)
		mid = b;
	if (c > b && b > a)
		mid = b;
	if (b > a && a > c)
		mid = a;
	if (c > a && a > b)
		mid = a;
	if (a > c && c > b)
		mid = c;
	if (b > c && c > a)
		mid = c;

	printf("%d", mid);
}