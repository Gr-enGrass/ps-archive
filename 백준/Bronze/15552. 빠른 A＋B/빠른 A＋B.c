#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int T, A, B,Sum;
	scanf("%d", &T);
	for (int i = 0; i < T; ++i)
	{
		scanf("%d %d", &A, &B);
		Sum = A + B;
		printf("%d\n", Sum);
	}
		

	return 0;
}