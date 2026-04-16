#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>


int main()
{
	int N, MIN, MAX;
	int* arr;

	scanf("%d", &N);

	arr = (int*)malloc(sizeof(int) * N);

	for (int i = 0; i < N; ++i)
		scanf("%d", &arr[i]);
	MAX = arr[0];
	MIN = arr[0];

	for (int j = 0; j < N; ++j)
	{
		if (arr[j] > MAX)
			MAX = arr[j];
		if (arr[j] < MIN)
			MIN = arr[j];
	}
	printf("%d %d", MIN, MAX);
	return 0;
}