#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n, m;
	scanf("%d %d", &n, &m);
	if (n * 100 >= m)
		printf("Yes");
	else
		printf("No");
}
