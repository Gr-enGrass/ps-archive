#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	int l, p,a,b,c,d,e;
	scanf("%d %d", &l, &p);
	scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
	int mul = l * p;
	a -= mul;
	b -= mul;
	c -= mul;
	d -= mul;
	e -= mul;
	printf("%d %d %d %d %d", a, b, c, d, e);
}
