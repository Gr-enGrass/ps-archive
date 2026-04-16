#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	int n;
	int x_min=10001, x_max=-10001,y_min=10001,y_max=-10001;
	int round;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		int x, y;
		scanf("%d %d", &x, &y);
		if (x_min > x)
			x_min = x;
		if (y_min > y)
			y_min = y;
		if (x_max < x)
			x_max = x;
		if (y_max < y)
			y_max = y;
	}
	round = (x_max - x_min) * (y_max - y_min);
	printf("%d", round);
}