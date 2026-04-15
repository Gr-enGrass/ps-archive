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
	
	int n,m;
	cin >> n >> m;

	int sum = 0;
	int cnt = 0;
	while (n--)
	{
		int temp;
		cin >> temp;
		sum += temp;
		if (sum < 0)
			sum = 0;
		if (m <= sum)
			cnt++;
	}
	cout << cnt;
}