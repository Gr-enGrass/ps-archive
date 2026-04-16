#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int N;
	scanf("%d", &N);
	for (int i = 1; i <= N; ++i) {
		for (int line = 1; line <=i; ++line)
			printf("*");
		printf("\n");
	}
	return 0;
}