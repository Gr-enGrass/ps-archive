#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int arr[100] = { 0 }, M, i, j, k, N;
	scanf("%d %d", &N, &M);

	for (int I = 0; I < M; ++I)
	{
		scanf("%d %d %d", &i, &j, &k);
		for (int K = i; K <= j; ++K)
		{
			arr[K - 1] = k;
		}
	}	
	for (int J = 0; J < N; ++J)
		printf("%d ", arr[J]);
	return 0;
}