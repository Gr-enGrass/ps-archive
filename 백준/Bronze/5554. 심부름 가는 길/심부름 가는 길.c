#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	int a, b, c, d,x,y;
	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);
	scanf("%d", &d);

	x = (a + b + c + d) / 60;
	y = (a + b + c + d) % 60;

	printf("%d\n", x);
	printf("%d\n", y);
}
