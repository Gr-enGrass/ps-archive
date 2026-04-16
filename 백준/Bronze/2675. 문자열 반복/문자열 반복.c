#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
	char S[21];
	int T,R;
	
	
	for (scanf("%d", &T); T--;)
	{
		scanf("%d %s", &R, S);
		for (int i = 0; S[i] != 0; ++i)
		{
			for (int j = 0; j < R; ++j)
			{
				printf("%c", S[i]);
			}
		}
		printf("\n");
	}
}