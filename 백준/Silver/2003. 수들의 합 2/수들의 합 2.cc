
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n,m;
    cin >> n >> m;
    vector<int>arr(n);
    for(int i =0;i<n;i++)
    {
        cin >> arr[i];
    }
    
    int left = 0,right=0;
    int sum = arr[0];
    int cnt = 0;
    
    while(right<n)
    {
        if(sum<m)
        {
            sum+=arr[++right];
        }
        else if(sum>m)
        {
            sum-=arr[left++];
        }
        else
        {
            cnt++;
            sum+=arr[++right];
        }
    }
    cout << cnt;
    return 0;
    
}