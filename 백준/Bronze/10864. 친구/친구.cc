#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <string>
#include <sstream>
#include <limits>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int n, m;
	cin >> n >> m;

	vector<int>result(n+1,0);
	while (m--)
	{
		int temp1, temp2;
		cin >> temp1 >> temp2;
		result[temp1]++;
		result[temp2]++;
	}
	for (int i = 1;i <= n;i++)
	{
		cout << result[i] << '\n';
	}
}