#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    int count = 0;
    
    // 5의 배수로 나누면서 count를 증가시킨다.
    for (int i = 5; i <= N; i *= 5) {
        count += N / i;
    }

    cout << count << endl;
    return 0;
}
