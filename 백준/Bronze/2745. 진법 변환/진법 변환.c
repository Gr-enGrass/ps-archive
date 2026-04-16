#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	int b;
	int sum = 0;
	char n[100] = { 0 };
	scanf("%s %d", n, &b);
	int cnt = 0;
	int size = strlen(n);
	for (int i = size-1; i >= 0; i--)
	{
		if (n[i] >= 65)
		{
			n[i] -= 55;
		}
		else if (n[i] >= 48)
		{
			n[i] -= 48;
		}
		sum +=(n[i] * pow(b, cnt++));
	}
	printf("%d", sum);
}