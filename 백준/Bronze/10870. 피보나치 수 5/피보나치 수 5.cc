#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <string>
#include <sstream>
#include <limits>
using namespace std;

int fibo(int x)
{
	if (x <= 1)
		return x;

	return fibo(x - 1) + fibo(x - 2);
}

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	int n;
	cin >> n;

	cout << fibo(n);
}