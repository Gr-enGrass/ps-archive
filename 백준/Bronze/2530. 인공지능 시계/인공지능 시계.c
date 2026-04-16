#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	int a, b, c, d,c1,b1;
	scanf("%d %d %d", &a, &b, &c);
	scanf("%d", &d);
	c1 = c;
	c += d;
	if (c >= 60)
	{
		c -= 60 * (c / 60);
		b += (c1+d) / 60;
	}
	if (b >= 60)
	{
		b1 = b;
		b -= 60 * (b / 60);
		a += b1/ 60;
	}
	if (a >= 24)
	{
		a -= 24 * (a / 24);
	}
	printf("%d %d %d", a, b, c);
	return 0;
}
