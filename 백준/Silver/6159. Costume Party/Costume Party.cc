
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n, s;
    cin >> n >> s;
    vector<int> arr(n);
    for(int i =0;i<n;i++)
    {
        cin >> arr[i];
    }
    sort(arr.begin(),arr.end());
    
    int cnt = 0;
    int left = 0,right = n-1;
    while(right>left)
    {
        if(arr[left]+arr[right]<=s)
        {
            cnt+=(right-left);
            left++;
        }
        else
        {
            right--;
        }
    }
    cout << cnt;
    return 0;
}