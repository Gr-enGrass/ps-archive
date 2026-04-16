#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	string num;

	cin >> num;
	int result = 0;
	for (const auto& a : num)
	{
		result = (result * 10 + a - '0') % 20000303;
	}
	cout << result;
}