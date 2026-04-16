#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>

int main()
{
	int a, b, c, d, e, f;
	scanf("%d %d %d %d %d %d", &a, &b, &c, &d, &e, &f);

	int y = (c * d - a * f) / (b * d - a * e);
	int x = (c * e - b * f) / (a * e - b * d);

	printf("%d %d\n", x, y);
	return 0;
}