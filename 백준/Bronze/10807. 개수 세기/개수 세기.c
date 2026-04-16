#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int N, v;
	int arr[101];
	scanf("%d", &N);
	for (int i = 0; i < N; i++)
	{
		scanf("%d", &arr[i]);
	}
	scanf("%d", &v);
	int count=0;
	for (int j = 0; j < N; ++j)
	{
		if (arr[j] == v)
			++count;
	}
	printf("%d", count);
	return 0;
}
