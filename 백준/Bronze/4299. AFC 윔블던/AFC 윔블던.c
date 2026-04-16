#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	int a, b, x, y;
	scanf("%d %d", &a, &b);
	a -= b;
	if (a < 0)
	{
		printf("-1");
		return 0;
	}
	else if (a % 2 == 0)
	{
		x = a / 2 + b;
		y = a / 2;
		printf("%d %d", x, y);
	}
	else
		printf("-1");
}
