
#include <iostream>
#include <vector>
using namespace std;



int main()
{
    int n;
    cin >> n;
    vector<int> dp(1000001,0);
    dp[1] = 1;
    dp[2] = 2;
    for(int i =3;i<=n;i++)
    {
        dp[i]=(dp[i-2]%15746+dp[i-1]%15746)%15746;
    }
    cout << dp[n];
    return 0;
}