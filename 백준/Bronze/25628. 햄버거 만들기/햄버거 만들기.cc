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

	int a, b;
	int result;
	cin >> a >> b;

	a = a / 2;
	if (a < b)
	{
		result = a;
	}
	else
	{
		result = b;
	}
	cout << result;
}