#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<string.h>

int main()
{
	int N,cnt=0,sum=0;
	while (1)
	{
		scanf("%d", &N);
		if (N == 0)
			break;
		cnt = N;
		sum = 0;
		for (int i = 1; i <= N;i++)
		{
			sum += cnt--;
		}
		printf("%d\n", sum);
	}
}