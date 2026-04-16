#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int N,result=1;
	scanf("%d", &N);
	int max=1, min;
	int cnt = 1;
	if (N == 1)
	{
		printf("1");
		return 0;
	}
		
	while (1)
	{
		min = max + 1;
		max =  min + 6 * cnt++ -1;
		if (min <= N && N <= max)
		{
			printf("%d", cnt);
			break;
		}
	}
	return 0;
}