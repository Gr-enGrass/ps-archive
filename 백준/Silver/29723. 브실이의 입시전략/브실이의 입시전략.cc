#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <string>
#include <sstream>
#include <limits>
#include <queue>
#include <map>
using namespace std;

bool cmp(const pair<string, int>& a, const pair<string, int>& b)
{
	return a.second < b.second;
}

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int n, m, k;
	cin >> n >> m >> k;

	int cnt = m - k;
	map<string, int>mp1;
	while (n--)
	{
		string str;
		int temp;
		cin >> str >> temp;
		mp1.insert({ str,temp });
	}
	
	int sum = 0;
	while (k--)
	{
		string str;
		cin >> str;

		sum += mp1[str];
		mp1.erase(str);
	}
	vector<pair<string, int>>mp2(mp1.begin(),mp1.end());
	sort(mp2.begin(), mp2.end(), cmp);

	int sum2 = sum;
	for (int i = 0;i < cnt;i++)
	{
		sum += mp2[i].second;
	}
	int len = mp2.size() - 1;
	for (int i = len;i > len - cnt;i--)
	{
		sum2 += mp2[i].second;
	}
	cout << sum << ' ' << sum2;
}