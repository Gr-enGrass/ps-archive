#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() 
{
	int N, K;
	int cnt = 0;
	int measure = 1;
	int num;

	scanf("%d %d", &N, &K);
	while (cnt<K)
	{
		if (N % measure == 0)
		{
			num = measure++;
			cnt++;
		}
		else {
			if (measure > N)
			{
				printf("0");
				return 0;
			}
			measure++;
		}
	
	}
	printf("%d",num);
}