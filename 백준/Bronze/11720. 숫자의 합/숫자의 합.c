#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int N,sum=0;
	char str[100];
	scanf("%d", &N);

	scanf("%s", &str);
	for(int i = 0;i<N;++i)
	{
		sum = sum + (str[i] - '0');
	}
	printf("%d", sum);
}
