#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() 
{
	int M, N,sum=0,prime_num_cnt=0;
	int min;
	scanf("%d", &M);
	scanf("%d", &N);

	for (int i = M; i <= N; i++)
	{
		int cnt = 0;
		for (int j = 1; j <= i; j++)
		{
			if (i % j == 0)
				cnt++;
			if (cnt == 2)
			{
				min = i;
				break;
			}
		}	
	}

	for (int i = M; i <= N; i++)
	{
		int cnt = 0;
		for (int j = 1; j <= i; j++)
		{
			if (i % j == 0)
				cnt++;
		}
		if (cnt == 2)
		{
			sum += i;
			if (min > i)
				min = i;
		}
	}
	if (sum == 0)
	{
		printf("-1");
		return 0;
	}
	printf("%d\n", sum);
	printf("%d", min);
}