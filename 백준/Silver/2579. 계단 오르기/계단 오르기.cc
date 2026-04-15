
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    int n ;
    cin >> n;
    vector<int>stair;
    int dp[n] = {0};
    int temp;

    for(int i =0;i<n;i++)
    {
        cin >> temp;
        stair.push_back(temp);
    }
    
    dp[0]=stair[0];
    dp[1]=stair[0]+stair[1];
    dp[2]=max(stair[0]+stair[2],stair[1]+stair[2]);
    for(int i = 3;i<n;i++)
    {
        dp[i]=max(dp[i-2]+stair[i],dp[i-3]+stair[i-1]+stair[i]);
    }
    cout << dp[n-1];
    return 0;
}