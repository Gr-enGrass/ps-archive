#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

char wb[8][8] = { "WBWBWBWB","BWBWBWBW","WBWBWBWB","BWBWBWBW","WBWBWBWB","BWBWBWBW","WBWBWBWB","BWBWBWBW" };
char bw[8][8] = { "BWBWBWBW","WBWBWBWB","BWBWBWBW","WBWBWBWB","BWBWBWBW","WBWBWBWB","BWBWBWBW","WBWBWBWB" };

int wb_cnt(char chess[][51], int n, int m)
{
	int cnt = 0;
	for (int i = n; i < n + 8; i++)
	{
		for (int j = m; j < m + 8; j++)
		{
			if (chess[i][j] != wb[i-n][j-m])
				cnt++;
		}
	}
	return cnt;
}
int bw_cnt(char chess[][51], int n, int m)
{
	int cnt = 0;
	for (int i = n; i < n + 8; i++)
	{
		for (int j = m; j < m + 8; j++)
		{
			if (chess[i][j] != bw[i-n][j-m])
				cnt++;
		}
	}
	return cnt;
}

int main() {

	int n, m;
	scanf("%d %d", &n, &m);

	int min = 9999;
	int wbcnt;
	int bwcnt;

	char chess[51][51] = { '\0' };


	for (int i = 0; i < n; i++)
	{
		scanf("%s", chess[i]);
	}

	for (int j = 0; j <= n - 8; j++)
	{
		for (int k = 0; k <= m - 8; k++)
		{
			bwcnt = bw_cnt(chess, j, k);
			wbcnt = wb_cnt(chess, j, k);
			if (wbcnt < min)
			{
				min = wbcnt;
			}
			if (bwcnt < min)
			{
				min = bwcnt;
			}
		}
	}

	printf("%d", min);

}