#include <iostream>
#include <cmath>
using namespace std;
typedef long double ld;

int N;
ld total;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	cout << fixed;
	cout.precision(10);

	cin >> N;
	while (N--) {
		ld x; cin >> x;
		total += x * x * x;
	}

	cout << cbrt(total);
}