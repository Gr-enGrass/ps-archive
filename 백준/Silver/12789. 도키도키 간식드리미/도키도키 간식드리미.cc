#include <iostream>
#include <stack>

using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[1000] = {0};
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int check = 1;
    stack<int> line;

    for (int j = 0; j < n; j++) {
        // 현재 스택의 꼭대기 요소가 check와 같은 경우 pop
        while (!line.empty() && line.top() == check) {
            line.pop();
            check++;
        }

        if (arr[j] == check) {
            check++;
        } else {
            if (line.empty() || line.top() > arr[j]) {
                line.push(arr[j]);
            } else {
                cout << "Sad";
                return 0;  // Sad인 경우 조기 종료
            }
        }
    }

    cout << "Nice";
    return 0;
}
