#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int N,cnt=1,N1,N2,N3,SAVE;
	scanf("%d", &N);
	
	SAVE = N;
	N1 = SAVE;
	N2 = SAVE;
	N3 = SAVE;
	for (int i = 0; i < N1; i++)
	{	
		for (int j = 0; j < N-1; j++)
		{
			printf(" ");
		}
		N--;
		for (int k = 0; k < cnt; k++)
		{
			printf("*");
		}
		cnt += 2;
		printf("\n");
	}
	cnt = 1;
	N1 = SAVE-1;
	for (int l = 0; l < N2 - 1; l++)
	{
		for (int m = N1;m<N2;m++)
		{
			printf(" ");
		}
		N1--;
		for (int n = 0; n < (N3 * 2 - 3); n++)
		{
			printf("*");
		}
		N3--;
		printf("\n");
	}
}
