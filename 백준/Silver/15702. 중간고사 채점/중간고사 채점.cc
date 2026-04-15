#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <string>
#include <sstream>
#include <limits>
using namespace std;

bool cmp(pair<int,int>&a, pair<int,int>&b)
{
	if (a.second == b.second)
	{
		return a.first < b.first;
	}
	return a.second > b.second;
}

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int n, m;
	cin >> n >> m;

	vector<int>score;
	vector<pair<int, int>>result;
	for (int i = 0;i < n;i++)
	{
		int temp;
		cin >> temp;
		score.push_back(temp);
	}
	while (m--)
	{
		int temp;
		cin >> temp;

		int sum = 0;
		for (int i = 0;i < n;i++)
		{
			char c;
			cin >> c;
			if (c == 'O')
			{
				sum += score[i];
			}
		}
		result.push_back(make_pair(temp,sum));
	}
	sort(result.begin(),result.end(),cmp);
	cout << result.front().first << ' ' << result.front().second;
}