#include <iostream>
#include <string>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	string a, b;
	int c;
	cin >> a >> b >> c;
	cout << stoi(a) + stoi(b) - c << '\n';
	string sum = a+b;
	cout << stoi(sum) - c;
}