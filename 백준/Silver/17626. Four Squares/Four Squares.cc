#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    cin >> n;

    int dp[n + 1]; 
    dp[0] = 0;  
    
    for (int i = 1; i <= n; i++) {
        int temp = 5;
        for (int j = 1; j * j <= i; j++) {
            temp = min(temp, dp[i - j * j] + 1);
        }
        dp[i]=temp;
    }

    cout << dp[n];
    return 0;
}
