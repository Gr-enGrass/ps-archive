
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int>dp(n+1,0);
    
    dp[1]=100000;
    dp[2]=1;
    dp[3]=100000;
    dp[4]=2;
    dp[5]=1;
    for(int i =6;i<=n;i++)
    {
        dp[i]=min(dp[i-5]+1,dp[i-2]+1);
    }

    if(dp[n]>=100000)
    {
        cout << "-1";
    }
    else
    {
        cout << dp[n];
    }
    return 0;
}