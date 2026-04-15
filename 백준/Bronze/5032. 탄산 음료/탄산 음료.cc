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

	int e, f, c;
	cin >> e >> f >> c;
	int result = 0;
	int sum = e + f;
	int eb;
	while (1)
	{
		if (sum<c)
			break;

		result += (sum / c);
		eb = (sum % c) + (sum / c);

		sum = eb;

	}
	cout << result;
}