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

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int n;
	cin >> n;

	int pm;
	if (n >= 1000000)
	{
		pm = n * 0.2;
	}
	else if (n >= 500000)
	{
		pm = n * 0.15;
	}
	else if (n >= 100000)
	{
		pm = n * 0.1;
	}
	else
	{
		pm = n * 0.05;
	}
	cout << pm << ' ' << n - pm;
}