#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	int a1, a0, c, n0;

	scanf("%d %d", &a1, &a0);

	scanf("%d", & c);
	scanf("%d", &n0);

	int res = 1;
	if (c < a1) res = 0;
	if ((c - a1) * n0 < a0) res = 0;

	printf("%d\n", res);
	return 0;
}
