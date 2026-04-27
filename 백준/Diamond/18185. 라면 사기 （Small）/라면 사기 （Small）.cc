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

vector<int> factory;

int cost{ 0 };

void buy(int idx, int size) {
	if (idx >= size) {
		return;
	}
	if (idx < size && factory[idx] != 0) {
		factory[idx]--;
		cost += 3;
		if (idx + 1 < size && factory[idx + 1] != 0) {
			int temp2 = factory[idx + 1];
			factory[idx + 1]--;
			cost += 2;
			if (idx + 2 < size && factory[idx + 2] != 0) {
				if (factory[idx + 2] >= temp2) {
					factory[idx + 2]--;
					cost += 2;
				}
			}
		}
		buy(idx, size);
	}
	else {
		buy(idx + 1, size);
	}
}

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int N, quan;
	cin >> N;
	for (int i{ 1 }; i <= N; i++) {
		cin >> quan;
		factory.push_back(quan);
	}
	buy(0, N);
	cout << cost;
}