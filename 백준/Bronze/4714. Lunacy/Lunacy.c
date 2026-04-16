#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	double x;
	scanf("%lf", &x);

	while(x != -1.0)
	{
		printf("Objects weighing %.2f on Earth will weigh %.2f on the moon.\n", x, x * 0.167);
		scanf("%lf", &x);
	}
}
