#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() 
{
	int n, cnt = 1, plus, carry;

	scanf("%d", &n);
	plus = n / 10 + n % 10;
	plus %= 10;
	plus += n % 10 * 10;
	if (plus == n)
	{
		printf("1");
		return 0;
	}
	
	while (1) {
		carry = plus;
		plus = carry / 10 + carry % 10;
		plus %= 10;
		plus += carry % 10 * 10;
		cnt++;
		if (plus == n)
			break;
	}
	printf("%d", cnt);
}