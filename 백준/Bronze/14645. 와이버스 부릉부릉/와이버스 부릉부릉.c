#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int N, K,A,B,sum=0;
	scanf("%d %d", &N, &K);
	for (int i = 0; i < N; i++)
	{
		scanf("%d %d", &A, &B);
		sum += A - B;
	}
	sum += K;
	printf("비와이");
}	