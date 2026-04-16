
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int x;
    cin >> x;
    
    int dp[1000001]={0};
    
    dp[1]=0;
    dp[2]=1;
    dp[3]=1;
    
    for(int i=4;i<=x;i++)
    {
        dp[i]=dp[i-1]+1;//1을뺀경우
        if(i%3==0)
        {
            dp[i]=min(dp[i],dp[i/3]+1);//3으로 나누는 경우
        }
        if(i%2==0)
        {
            dp[i]=min(dp[i],dp[i/2]+1);//2로 나누는 경우
        }
    }
    cout << dp[x];
    return 0;
}