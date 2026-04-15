#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    cin >> n;

    int dp[n + 1]; 
    dp[0] = 0;  

    //최대값으로 초기화
    for (int i = 1; i <= n; i++) {
        dp[i] = i;
    }

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j * j <= i; j++) {
            dp[i] = min(dp[i], dp[i - j * j] + 1);
        }
    }

    cout << dp[n];
    return 0;
}
