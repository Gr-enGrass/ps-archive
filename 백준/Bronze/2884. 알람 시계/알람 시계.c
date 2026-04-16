#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int H, M;
	scanf("%d %d", &H,&M);

	if (H == 1 && M < 45) H = 1;
	else if (H == 1 && M >= 45) H = 1;

	if (H == 0 && M < 45) H = 24 ;
	else if (H == 0 && M >= 45)H = 0;

	if (M < 45) printf("%d %d", H-1, 60 - (45 - M));
	else printf("%d %d", H, M - 45);
	
	return 0;
}