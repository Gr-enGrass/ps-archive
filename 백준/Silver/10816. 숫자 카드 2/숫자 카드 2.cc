
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int n,m;
vector<int> a;

int lb(int x)
{
    int left =0, mid, right = n;
    while(left<right)
    {
        mid=(left+right)/2;
        if(a[mid]<x)
        {
            left=mid+1;
        }
        else
        {
            right=mid;
        }
    }
    return right;
}

int ub(int x)
{
    int left =0, mid, right = n;
    while(left<right)
    {
        mid=(left+right)/2;
        if(a[mid]<=x)
        {
            left=mid+1;
        }
        else
        {
            right=mid;
        }
    }
    return right;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    cin >> n;
    a.resize(n);
    for(int i=0;i<n;i++)
    {
        cin >> a[i];
    }
    
    sort(a.begin(),a.end());
    
    int temp;
    cin >> m;
    for(int i=0;i<m;i++)
    {
        cin >> temp;
        cout << ub(temp)-lb(temp) << " ";
    }
    return 0;
}