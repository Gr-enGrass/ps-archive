#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	double x, y;
	scanf("%lf %lf", &x, &y);
	while (x != 0 || y != 0)
	{
		if (x > 0 && y > 0)
		{
			printf("Q1\n");
		}
		else if (x < 0 && y > 0)
		{
			printf("Q2\n");
		}
		else if (x < 0 && y < 0)
		{
			printf("Q3\n");
		}
		else if (x > 0 && y < 0)
		{
			printf("Q4\n");
		}
		else
		{
			printf("AXIS\n");
		}
		scanf("%lf %lf", &x, &y);
	}
	printf("AXIS");
	return 0;
}
