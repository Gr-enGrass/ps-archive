#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	int a, b, c,max,min,mid;
	scanf("%d %d %d", &a, &b, &c);

	if (a < b)
	{
		max = b;
		min = a;
	}
	else
	{
		max = a;
		min = b;
	}
	if (c > max)
	{
		mid = max;
		max = c;
	}
	else if(c>min) 
	{
		mid = c;
	}
	else
	{
		mid = min;
		min = c;
	}
	printf("%d %d %d", min, mid, max);
	return 0;
}
