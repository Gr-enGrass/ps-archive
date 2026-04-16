#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int h, m;
	scanf("%d %d", &h, &m);
	printf("%d",(h - 9) * 60 + m);
}