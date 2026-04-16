#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	while (1)
	{
		int M, F;
		scanf("%d %d", &M, &F);
		if (M == 0&&F==0)break;

		printf("%d\n", M + F);
		
	}
}
