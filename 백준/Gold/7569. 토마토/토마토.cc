#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <string>
#include <sstream>
#include <limits>
#include <queue>
#include <tuple>
using namespace std;

int m, n, h;
int arr[100][100][100] = {};
int result;
queue<tuple<int, int, int>>q;
int check();
void solve()//bfs
{
	int dz[6] = { 0,0,0,0,1,-1 };
	int dx[6] = { -1,1,0,0,0,0 };
	int dy[6] = { 0,0,-1,1,0,0 };
	
	while (!q.empty())
	{
		tuple<int, int, int>temp = q.front();
		q.pop();

		for (int i = 0; i < 6; i++)
		{
			int z = get<0>(temp);
			int x = get<1>(temp);
			int y = get<2>(temp);

			int nz = z + dz[i];
			int nx = x + dx[i];
			int ny = y + dy[i];
			
			if (nz < 0 || nx < 0 || ny < 0 || nx >= n || ny >= m || nz >= h)
				continue;

			if (arr[nz][nx][ny] == 0)//visit 체크
			{
				arr[nz][nx][ny] = arr[z][x][y] + 1;
				q.push({ nz,nx,ny });
			}
		}
	}
	result = check();
}

int check()
{
	int cnt = 0;
	for (int i = 0; i < h; i++)
	{
		for (int j = 0; j < n; j++)
		{
			for (int k = 0; k < m; k++)
			{
				cnt = max(cnt, arr[i][j][k]);
				if (arr[i][j][k] == 0)
					return -1;
			}
		}
	}
	return cnt - 1;
}

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	cin >> m >> n >> h;

	for (int i = 0; i < h; i++)
	{
		for (int j = 0; j < n; j++)
		{
			for (int k = 0; k < m; k++)
			{
				int temp;
				cin >> temp;
				arr[i][j][k] = temp;
				if (temp == 1)
					q.push({ i, j , k });
			}			
		}
	}
	solve();
	cout << result;
}