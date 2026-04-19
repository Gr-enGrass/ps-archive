#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <string>
#include <sstream>
#include <limits>
#include <queue>
using namespace std;

int m, n;
int arr[1000][1000] = {};
int result;
queue<pair<int, int>>q;
int check();
void solve()//bfs
{
	int dx[4] = { -1,1,0,0 };
	int dy[4] = { 0,0,-1,1 };
	while (!q.empty())
	{
		pair<int, int>temp = q.front();
		q.pop();

		for (int i = 0;i < 4;i++)
		{
			int x = temp.first;
			int y = temp.second;

			int nx = x + dx[i];
			int ny = y + dy[i];

			if (nx<0 || ny<0 || nx>=n || ny>=m)
				continue;

			if (arr[nx][ny] == 0)//visit 체크
			{
				arr[nx][ny] = arr[x][y] + 1;
				q.push({ nx,ny });
			}
		}
	}
	result = check();
}

int check()
{
	int cnt = 0;
	for (int i = 0;i < n;i++)
	{
		for (int j = 0;j < m;j++)
		{
			cnt = max(cnt, arr[i][j]);
			if (arr[i][j] == 0)
				return -1;
		}
	}
	return cnt-1;
}

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	cin >> m >> n;	

	for (int i = 0;i < n;i++)
	{
		for (int j = 0;j < m;j++)
		{
			int temp;
			cin >> temp;
			arr[i][j] = temp;
			if (temp == 1)
				q.push({ i, j });
		}
	}
	solve();
	cout << result;
}