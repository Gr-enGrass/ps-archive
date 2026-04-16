#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a, b;


	first:
	scanf("%d %d", &a, &b);
	if (a != 0 && b != 0)
	{
		printf("%d\n", a + b);
		goto first;
	}
	else
		

	return 0;
}