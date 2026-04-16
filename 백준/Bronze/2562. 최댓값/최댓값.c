#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>


int main()
{
	int N, MAX, arr[9];

	for (int i = 0; i < 9; ++i)
		scanf("%d", &arr[i]);

	MAX = arr[0];

	for (int j = 0; j < 9; ++j)
	{
		if (arr[j] > MAX)
		MAX = arr[j];
	}
	N = 1;
	for (int n = 0; n < 9; ++n) {
		if (MAX == arr[n])
			break;
		++N;
	}
	printf("%d\n", MAX);
	printf("%d\n", N);

	return 0;
}