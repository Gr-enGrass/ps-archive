
#include <iostream>
#include <algorithm>
using namespace std;
int arr[1001];

int main()
{
    int n;
    cin >> n;
    for(int i=1;i<=n;i++)
    {
        cin >> arr[i];
    }
    int dp[1001]={};
    for(int i =1;i<=n;i++)
    {
        dp[i]=1;
    }

    for(int i =1;i<=n;i++)
    {
        for(int j = 1;j<i;j++)
        {
            if(arr[j]<arr[i])
            {
                dp[i]=max(dp[j]+1,dp[i]);
            }
        }
    }
    sort(dp,dp+n+1);
    cout << dp[n];
    return 0;
}