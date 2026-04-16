#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int N, X;
	int arr[10001];
	scanf("%d %d", &N,&X);
	for (int i = 0; i < N; i++)
	{
		scanf("%d", &arr[i]);
	}
	for (int j = 0; j < N; ++j)
	{
		if (arr[j] < X)
			printf("%d ", arr[j]);
	}
	return 0;
}
