
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int>arr(n);
    for(int i =0;i<n;i++)
    {
        cin >> arr[i];
    }
    
    int x;
    cin >> x;
    
    sort(arr.begin(),arr.end());
    int left = 0,right=n-1;
    int cnt = 0;

    while(left<right)
    {
        int sum = arr[right] + arr[left];
        
        if(sum<x)
        {
            left++;
        }
        else if(sum>x)
        {
            right--;
        }
        else
        {
            cnt++;
            left++;
            right--;
        }
    }
    
    cout << cnt;
    return 0;
    
}