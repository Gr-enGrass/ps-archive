#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int t;
	scanf("%d", &t);
	printf("%d", t%5==0?t/5:t/5+1);
}