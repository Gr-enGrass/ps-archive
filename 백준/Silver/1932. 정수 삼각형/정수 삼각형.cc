
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int size = (n*(n+1))/2;
    int num[size+1]={0};
    long long dp[n+1][n+1]={0};
    for(int i =1;i<=size;i++)
    {
        cin >> num[i];
    }
    
    int idx = 2;
    int cnt = 1;
    dp[1][1]=num[1];
    
    for(int i = 1;i<n;i++)
    {
        for(int j = 1;j<=cnt;j++)
        {
            dp[i+1][j]=max(dp[i+1][j],dp[i][j]+num[idx++]);
            dp[i+1][j+1]=max(dp[i+1][j+1],dp[i][j]+num[idx]);
        }
        idx++;
        cnt++;
    }
    long long int big = -9999;

    for(int i = 1;i<=n;i++)
    {
        if(big<dp[n][i])
            big = dp[n][i];
    }
    cout << big;
    return 0;
}