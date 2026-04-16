#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int temp;
	int num[5];
	int sum = 0;
	for (int i = 0;i < 5;i++) {
		scanf(" %d", &num[i]);
		sum += num[i];
	}
	for (int i = 1;i <= 5;i++) {
		for (int j = 0;j < 5 - i;j++) {
			if (num[j] > num[j + 1]) {
				temp = num[j];
				num[j] = num[j + 1];
				num[j + 1] = temp;
			}
		}
	}
	printf("%d\n", sum / 5);
	printf("%d\n", num[2]);
}