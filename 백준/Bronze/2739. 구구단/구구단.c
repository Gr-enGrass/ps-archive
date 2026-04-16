#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int N , count;
	scanf("%d", &N);

	count = 1;
	while (count<10)
	{
		printf("%d * %d = %d\n", N, count, N * count);
		count = count + 1;
	}
	return 0;
}