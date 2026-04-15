
#include <iostream>
#include <vector>

using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m;
    cin >> n >> m;
    vector<int>num(n+1,0);
    for(int i =1;i<=n;i++)
    {   
        cin >> num[i];
    }
    
    int dp[100001]={0};
    dp[1]=num[1];
    for(int i = 2;i<=n;i++)
    {
        dp[i]=dp[i-1]+num[i];
    }
    while(m--)
    {
        int a, b;
        cin >> a >> b;
        cout << dp[b]-dp[a-1] << '\n';
    }
    return 0;
}