#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<int>arr;
    vector<int>copy;
    int n;
    int x;
    
    cin >> n;
    
    for(int i =0;i<n;i++)
    {
        cin >> x;
        arr.push_back(x);
        copy.push_back(x);
    }
    
    sort(arr.begin(),arr.end());
    arr.erase(unique(arr.begin(),arr.end()),arr.end());
    
    for(int i=0;i<n;i++)
    {
        int index = lower_bound(arr.begin(),arr.end(),copy[i]) - arr.begin();
        cout << index << " ";
    }
    
    return 0;
}