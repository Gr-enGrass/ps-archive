#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int N, M;
	int i, j;

	int* arr;
	scanf("%d %d", &N,&M);
	arr = (int*)malloc(sizeof(int) * N);

	for (i = 0; i < N; ++i)
		arr[i] = i+1;
	
	int temp;

	for (int I = 0; I < M; ++I)
	{
		scanf("%d %d", &i, &j);
	
		temp = arr[i-1];
		arr[i-1] = arr[j-1];
		arr[j-1] = temp;
	}
	for (int Z = 0; Z < N; ++Z)
		printf("%d ", arr[Z]);

	
	
	free(arr);
	return 0;
}



