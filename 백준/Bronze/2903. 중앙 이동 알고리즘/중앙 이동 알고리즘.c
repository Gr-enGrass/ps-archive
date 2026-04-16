#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int N,dot=2,sum=0;
	scanf("%d", &N);
	for (int i = 0; i < N; i++)
	{
		dot +=dot -1;
		sum = dot * dot;
	}	
	printf("%d", sum);
}