#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	char a[4], b[4], temp[2];

	scanf("%s %s", a, b);

	temp[0] = a[0];
	a[0] = a[2];
	a[2] = temp[0];

	temp[0] = b[0];
	b[0] = b[2];
	b[2] = temp[0];

	if (a[0] > b[0])
		printf("%s", a);
	else if (a[0] < b[0])
		printf("%s", b);
	else if (a[1] > b[1])
		printf("%s", a);
	else if (a[1] < b[1])
		printf("%s", b);
	else if (a[2] > b[2])
		printf("%s", a);
	else if (a[2] < b[2])
		printf("%s", b);
		
	return 0;
} 