#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	int n;
	cin >> n;
	vector<int> time;

	while (n--)
	{
		int p;
		cin >> p;
		time.push_back(p);
	}
	sort(time.rbegin(), time.rend());
	int sum = 0;
	int cnt = 1;
	for (const auto& a : time)
	{
		sum = sum + (a * cnt++);
	}
	cout << sum;
}