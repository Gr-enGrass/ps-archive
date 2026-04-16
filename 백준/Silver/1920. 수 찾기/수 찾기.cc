
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int n,m;
vector<int> a;

void bs(int x)
{
    int left =0, mid, right = n-1;
    while(left<=right)
    {
        mid=(left+right)/2;
        if(a[mid]==x)
        {
            cout << "1\n";
            return;
        }
        else if(a[mid]<x)
        {
            left=mid+1;
        }
        else if(a[mid]>x)
        {
            right=mid-1;
        }
    }
    cout << "0\n";
    return;
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
        bs(temp);
    }
    return 0;
}