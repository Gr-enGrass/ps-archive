#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int ax, ay, az, bx, by, bz, cx, cy, cz;
	scanf("%d %d %d", &ax, &ay, &az);
	scanf("%d %d %d", &cx, &cy, &cz);

	bx = az>=cx?az - cx:-(az-cx);
	by = cy / ay + cy % ay;
	bz = ax>=cz?ax - cz:-(ax-cz);

	printf("%d %d %d", bx, by, bz);
	return 0;
}