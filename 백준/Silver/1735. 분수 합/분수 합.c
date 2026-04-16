#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int gcd(int a, int b)
{
	if (b == 0)
		return a;
	else
		return gcd(b, a % b);
}

int lcm(int a, int b)
{
	return a * b / gcd(a, b);
}

int main()
{
	int s1, m1, s2, m2;

	scanf("%d %d", &s1, &m1);
	scanf("%d %d", &s2, &m2);

	int mul = lcm(m1, m2);

	int sum_s = s1 * (mul / m1) + s2 * (mul / m2);
	printf("%d %d", sum_s/gcd(sum_s, mul), mul / gcd(sum_s, mul));
}