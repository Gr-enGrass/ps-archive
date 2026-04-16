#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
	char N[101] = { '0' };
	int len=0;
	scanf("%s", &N);

	for (int i = 0; i < 101; ++i)
	{
		if (N[i] == 0) {


			len = i;
			break;
		}
	}

	printf("%d", len);
	
	return 0;
}