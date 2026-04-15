#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <string>
#include <sstream>
#include <limits>
using namespace std;

char star[2188][2188];

void solve(int x, int y, int n)
{
	if (n == 3)
	{
		star[x][y] = '*';
		star[x][y+1] = '*';
		star[x][y+2] = '*';
		star[x+1][y] = '*';
		star[x+1][y+2] = '*';
		star[x+2][y] = '*';
		star[x+2][y+1] = '*';
		star[x+2][y+2] = '*';
	}
	else
	{
		int size = n / 3;
		
		solve(x, y, size);
		solve(x, y + size, size);
		solve(x, y + 2 * size, size);

		solve(x + size, y, size);

		solve(x + size, y + 2 * size, size);

		solve(x + 2 * size, y, size);
		solve(x + 2 * size, y + size, size);
		solve(x + 2 * size, y + 2 * size, size);
	}
}

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	int n;
	cin >> n;

	for (int i = 0;i < n;i++)
	{
		for (int j = 0;j < n;j++)
		{
			star[i][j] = ' ';
		}
	}

	solve(0, 0, n);

	for (int i = 0;i < n;i++)
	{
		for (int j = 0;j < n;j++)
		{
			cout << star[i][j];
		}
		cout << '\n';
	}
}