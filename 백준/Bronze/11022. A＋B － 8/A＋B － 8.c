#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int T, A, B,Sum;
	scanf("%d", &T);
	for (int i = 1; i -1< T; ++i)
	{
		scanf("%d %d", &A, &B);
		Sum = A + B;
		printf("Case #%d: %d + %d = %d\n", i, A, B, Sum);
	}
		

	return 0;
}