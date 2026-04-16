#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	int L, A, B, C, D;
	int happy_day;
	scanf("%d", &L);
	scanf("%d", &A);
	scanf("%d", &B);
	scanf("%d", &C);
	scanf("%d", &D);

	happy_day = L-((A % C == 0 ? A / C : A / C + 1) > (B % D == 0 ? B / D : B / D + 1) ? (A % C == 0 ? A / C : A / C + 1) : (B % D == 0 ? B / D : B / D + 1));
	printf("%d", happy_day);
}
