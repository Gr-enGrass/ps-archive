#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int n;
int wcnt;
int bcnt;
vector<vector<int>>arr(128, vector<int>(128));

bool check_blue(int x1, int y1, int x2, int y2)
{
	for (int i = x1; i < x2; i++)
	{
		for (int j = y1; j < y2; j++)
		{
			if (!arr[i][j])
			{
				return false;
			}
		}
	}
	return true;
}

bool check_white(int x1, int y1, int x2, int y2)
{
	for (int i = x1; i < x2; i++)
	{
		for (int j = y1; j < y2; j++)
		{
			if (arr[i][j])
			{
				return false;
			}
		}
	}
	return true;
}

void solve(int x1, int y1, int x2, int y2)
{
	if (check_white(x1, y1, x2, y2))
	{
		wcnt++;
		return;
	}

	if (check_blue(x1, y1, x2, y2))
	{
		bcnt++;
		return;
	}

	int mx = (x1 + x2) / 2;
	int my = (y1 + y2) / 2;

	solve(x1, y1, mx, my);
	solve(x1, my, mx, y2);
	solve(mx, y1, x2, my);
	solve(mx, my, x2, y2);
}

int main()
{
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin >> arr[i][j];
		}
	}
	solve(0, 0, n, n);
	cout << wcnt << '\n';
	cout << bcnt;
}