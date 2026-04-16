#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int k, w, m;
	int cnt = 0;

	scanf("%d %d %d", &k, &w, &m);

	for (int i = 0; k < w; k += m)
	{
		cnt++;
	}
	printf("%d", cnt);
}