#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int X;
	scanf("%d", &X);
	int k = 1;

	while (1)
	{
		if ((k - 1) * (k) / 2 < X && X <= (k) * (k + 1) / 2)
		{
			break;
		}
		k++;
	}
	
	int a = k * (k + 1) / 2;

	if (k % 2 != 0)
	{
		printf("%d/%d", a - X + 1, k - (a - X));
	}
	else
	{
		printf("%d/%d", k - (a - X), a - X + 1);
	}
	return 0;
}