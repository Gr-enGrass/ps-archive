#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	int n;
	scanf("%d", &n);
	int cnt = 0;

	while (1)
	{
		if (n % 5 == 0)
		{
			cnt += n / 5;
			break;
		}
		else
		{
			n -= 3;
			cnt++;
		}
		if (n <= 0)
			break;
	}
	if (n%5 == 0)
		printf("%d", cnt);
	else
		printf("-1");
}