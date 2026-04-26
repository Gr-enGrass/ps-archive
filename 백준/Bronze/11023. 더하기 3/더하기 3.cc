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

	int sum = 0;
	int n;
	while (cin >> n)
	{
		sum += n;
	}
	cout << sum;
}