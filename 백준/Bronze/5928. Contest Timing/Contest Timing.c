#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	int D, H, M;
	scanf("%d %d %d", & D, &H, &M);

	D -= 11;
	H -= 11;
	M -= 11;

	if (M < 0)
	{
		M = 60 + M;
		H--;
	}
	if (H < 0)
	{
		H = 24 + H;
		D--;
	}
	if (H * 60 + D * 24 * 60 < 0)
	{
		printf("-1");
		return 0;
	}
	printf("%d", M + H * 60 + D * 24 * 60);
}
