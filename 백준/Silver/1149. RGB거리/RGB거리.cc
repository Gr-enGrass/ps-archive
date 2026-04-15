#include <iostream>
#include <string>
#include <string.h>
#include <sstream>
#include <cmath>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n+1][4] = {};
    for(int i =1;i<=n;i++)
    {
        cin >> a[i][1] >> a[i][2] >> a[i][3];
    }
    
    int dp[n+1][4]={};

    for(int i =1;i<=n;i++)
    {
        dp[i][1] = min(dp[i-1][2],dp[i-1][3]) + a[i][1];
        dp[i][2] = min(dp[i-1][1],dp[i-1][3]) + a[i][2];
        dp[i][3] = min(dp[i-1][2],dp[i-1][1]) + a[i][3];
    }
    cout << min(min(dp[n][1],dp[n][2]),dp[n][3]);
    return 0;
}