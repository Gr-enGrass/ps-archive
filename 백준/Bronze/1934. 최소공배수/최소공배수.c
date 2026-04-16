#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main(void)
{
	int t;
	int a, b,i;

	scanf("%d", &t);
	for (int j = 0; j < t; j++)
	{
		int cnt = 0;
		scanf("%d %d", &a, &b);
		int mul = a * b;

		int max = a > b ? a : b;

		for (i = mul; i >= 0; i -= max)
		{
			if (i % a == 0 && i % b == 0)
			{
				cnt++;
			}
		}
		printf("%d\n", mul / (cnt-1));
	}	
	return 0;
}