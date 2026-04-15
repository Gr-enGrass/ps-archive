#include <iostream>
#include <vector>
using namespace std;

using ll = long long;

ll MOD;  // 소수 p
vector<ll> fact, invFact;

// 빠른 거듭제곱
ll modpow(ll base, ll exp, ll mod) {
    ll res = 1;
    base %= mod;
    while (exp > 0) {
        if (exp & 1) res = (res * base) % mod;
        base = (base * base) % mod;
        exp >>= 1;
    }
    return res;
}

// 모듈러 역수 (페르마 소정리)
ll modinv(ll a, ll p) {
    return modpow(a, p - 2, p);
}

// 팩토리얼, 역팩토리얼 미리 계산
void init_factorials(int max_val) {
    fact.assign(max_val + 1, 1);
    invFact.assign(max_val + 1, 1);

    for (int i = 1; i <= max_val; i++) {
        fact[i] = (fact[i - 1] * i) % MOD;
    }

    invFact[max_val] = modinv(fact[max_val], MOD);
    for (int i = max_val - 1; i >= 0; i--) {
        invFact[i] = (invFact[i + 1] * (i + 1)) % MOD;
    }
}

// nCr 계산 (n, r < p)
ll nCr_small(ll n, ll r) {
    if (r > n) return 0;
    return fact[n] * invFact[r] % MOD * invFact[n - r] % MOD;
}

// 뤼카 정리로 nCr 계산
ll lucas(ll n, ll r) {
    if (r == 0) return 1;

    ll ni = n % MOD;
    ll ri = r % MOD;

    if (ri > ni) return 0;

    return (lucas(n / MOD, r / MOD) * nCr_small(ni, ri)) % MOD;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n, r;
    cin >> n >> r >> MOD;  // MOD는 소수 p 입력

    init_factorials((int)MOD - 1);

    cout << lucas(n, r) << "\n";

    return 0;
}
