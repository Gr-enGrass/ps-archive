#include <iostream>
#include <cstring>
#include <vector>
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
	cin.tie(NULL);
	
    ll n,k,temp, big=0,ans=0;
    cin >> n >> k;
    vector<ll> arr;
    
    for(int i=0;i<n;i++)
    {
        cin >> temp;
        arr.push_back(temp);
        big=max(big,temp);
    }
    
    ll left=1,right=big,mid;
    
    while(left<=right)
    {
        mid=(left+right)/2;
        ll cnt=0;
        
        for(int i=0;i<n;i++)
        {
            cnt+=arr[i]/mid;
        }
        
        if(cnt >= k)
        {
            left = mid +1;
            ans=max(ans,mid);
        }
        else
        {
            right=mid-1;
        }
    }
    cout << ans;
    return 0;
}