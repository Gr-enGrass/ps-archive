#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int temp;
	int num[1000];
	int cut;
	int n;
	scanf("%d %d", &n, &cut);

	for (int i = 0;i < n;i++) {
		scanf(" %d", &num[i]);
	}
	for (int i = 1;i <= n;i++) {
		for (int j = 0;j < n - i;j++) {
			if (num[j] > num[j + 1]) {
				temp = num[j];
				num[j] = num[j + 1];
				num[j + 1] = temp;
			}
		}
	}
	printf("%d", num[n - cut]);
}