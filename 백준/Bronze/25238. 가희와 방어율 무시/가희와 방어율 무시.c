#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a, b;
	float dmg;
	scanf("%d %d", &a, &b);
	dmg = a * (100 - b) / 100;
	if (dmg >= 100.0)
		printf("0");
	else
		printf("1");
}