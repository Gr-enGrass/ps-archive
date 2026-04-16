#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	int n;
	scanf("%d", &n);
	printf("Gnomes:\n");
	for (int i = 0; i < n; i++)
	{
		int a, b, c;
		scanf("%d %d %d", &a, &b, &c);
		if (a < b && b < c)
		{
			printf("Ordered\n");
		}
		else if (a > b && b > c)
		{
			printf("Ordered\n");
		}
		else
			printf("Unordered\n");
	}
}