#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>

int main()
{
	int x, y, w, h;
	int height, width;
	scanf("%d %d %d %d", &x, &y, &w, &h);

	if (x < w - x)
	{
		height = x;
	}
	else
	{
		height = w - x;
	}
	if (y < h - y)
	{
		width = y;
	}
	else
	{
		width = h - y;
	}
	if (height > width)
		printf("%d", width);
	else
		printf("%d", height);
}