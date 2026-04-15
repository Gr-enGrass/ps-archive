#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int a[3][100001] = {};
        int dp[3][100001] = {};
        for(int i = 1; i<=2;i++)
        {
            for(int j =1;j<=n;j++)
            {
                cin >> a[i][j];
            }
        }
        dp[1][1] = a[1][1];
        dp[2][1] = a[2][1];
        dp[1][2] = a[1][2]+a[2][1];
        dp[2][2] = a[2][2]+a[1][1];
        for(int i = 3; i<=n;i++)
        {
            dp[1][i] = max(a[1][i] + dp[2][i-1], a[1][i] + dp[2][i-2]);
            dp[2][i] = max(a[2][i] + dp[1][i-1], a[2][i] + dp[1][i-2]);
        }
        
        cout << max(dp[1][n],dp[2][n]) << '\n';
    }
    return 0;
}