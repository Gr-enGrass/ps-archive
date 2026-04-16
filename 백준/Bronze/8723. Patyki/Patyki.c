#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a, b, c;
	int max = 0;

	scanf("%d %d %d", &a, &b, &c);

	max = a;
	if (b > c)
	{
		if (b > max)
			max = b;
	}
	else
	{
		if (c > max)
			max = c;
	}

	if (a == b && b == c)
		printf("2");
	else if (a * a + b * b == max * max)
		printf("1");
	else if (a * a + c * c == max * max)
		printf("1");
	else if (b * b + c * c == max * max)
		printf("1");
	else
		printf("0");
}