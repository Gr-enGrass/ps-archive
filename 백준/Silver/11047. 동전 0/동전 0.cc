
#include <iostream>
#include <unordered_map>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n,k;
    cin >> n >> k ;
    int idx = n-1;
    vector<int> coin;
    while(n--)
    {
        int temp;
        cin >> temp;
        coin.push_back(temp);
    }
    int cnt = 0;
    while(1)
    {
        if (k == 0)
            break;
        if(k/coin[idx]>=1)
        {
            cnt += k/coin[idx];
            k = k%coin[idx];
        }
        idx--;
    }
    cout << cnt;
    return 0;
}