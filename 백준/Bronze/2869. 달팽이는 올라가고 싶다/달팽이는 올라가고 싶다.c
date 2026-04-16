#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int V, A, B, M;
	scanf("%d %d %d", &A, &B, &V);

	M = (V - B - 1) / (A - B) + 1;

	printf("%d", M);
}