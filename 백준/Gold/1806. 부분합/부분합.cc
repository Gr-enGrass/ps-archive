
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n,s;
    cin >> n >> s;
    vector<int> arr(n);
    for(int i =0;i<n;i++)
    {
        cin >> arr[i];
    }
    
    int sum = 0;
    int begin = 0;
    int length = 100001;
    for(int end =0;end<n;end++)
    {
        sum += arr[end];
        while(sum >= s)
        {
            length = min(length,end - begin + 1);
            sum -= arr[begin++];
        }
    }
    
    cout << (length == 100001 ? 0 : length);
    return 0;
}