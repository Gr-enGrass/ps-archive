#include <iostream>
using namespace std;

// 분할 정복을 이용한 거듭제곱
long long power(long long x, long long n, long long mod) {
    if (n == 0) return 1;
    if (n % 2 == 0) {
        long long half = power(x, n / 2, mod);
        return (half * half) % mod;
    } else {
        return (x * power(x, n - 1, mod)) % mod;
    }
}

int main() {
    long long a, b, c;
    cin >> a >> b >> c;

    cout << power(a, b, c);

    return 0;
}
