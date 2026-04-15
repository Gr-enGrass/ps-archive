#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int a, b;
	int result = 0;
	cin >> a >> b;

	if (a > b)
	{
		result = b * 2 + 1;
	}
	else if (a <= b)
	{
		result = a * 2 - 1;
	}
	cout << result;
}