#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int A , B, count, T;

	scanf("%d", &T);
	count = 0;
	while (count<T)
	{
		scanf("%d %d", &A, &B);
		printf("%d\n", A + B);
		count = ++count;
	}

	return 0;
}