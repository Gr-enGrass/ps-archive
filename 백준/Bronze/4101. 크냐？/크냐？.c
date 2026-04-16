#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int first, second;

	while (1)
	{
		scanf("%d %d", &first, &second);
		if (first == 0 && second == 0)
			break;
		if (first > second)
			printf("Yes\n");
		else
			printf("No\n");
	}
}