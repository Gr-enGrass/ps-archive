#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int N, M, I, J, K,CNT,CNT2;
	char basket[101],basketcopy[101];

	scanf("%d %d", &N, &M);

	for (int i = 1; i <= N; i++)
	{
		basket[i] = i;
		basketcopy[i] = i;
	}

	for (int i = 0; i < M; i++)
	{
		scanf("%d %d %d", &I, &J, &K);

		CNT = I;
		CNT2 = I;

		for (int j = K; j <= J; j++)
		{
			basket[CNT] = basket[j];
			CNT++;
		}

		for (int j = I; j < K; j++)
		{
			basket[J - K + I + 1] = basketcopy[CNT2];
			J++;
			CNT2++;
		}

		for (int k = 1; k <= 100; k++)
		{
			basketcopy[k] = basket[k];
		}
	}
	for (int l = 1; l <= N; l++)
	{
		printf("%d ", basket[l]);	
	}
	return 0;
}