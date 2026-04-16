#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int N, M;
	double avg,*arr,MAX=0;
	scanf("%d", &N);
	arr = (double*)malloc(sizeof(double) * N);

	for (int i = 0; i < N; ++i)
	{
		scanf("%d", &arr[i]);
	}
	MAX = arr[0];
	for (int j = 0; j < N; ++j)
	{
		if (arr[j] > MAX)
		MAX = arr[j];
	}
	for (int k = 0; k < N; ++k)
	{
		arr[k] = (arr[k] / (double) MAX) * 100.0;
	}
	avg = 0;
	for (int l = 0; l < N; ++l)
	{
		avg = avg + arr[l];
	}
	avg = (avg /(double) N);
	printf("%lf", avg);
	
	free(arr);
	return 0;
} 