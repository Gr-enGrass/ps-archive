
#include <iostream>

using namespace std;

int main()
{
    int n ;
    cin >> n;
    
    int arr[n];
    
    for(int i =0;i<n;i++)
    {
        cin >> arr[i];
    }
    
    int cnt = 0;
    int temp = 0;
    for(int i =0;i<n;i++)
    {
        if(temp<arr[i])
        {
            temp = arr[i];
            cnt++;
        }
    }
    cout << cnt << '\n';
    cnt = 0;
    temp = 0;
    for(int i = n-1;i>=0;i--)
    {
        if(temp<arr[i])
        {
            temp = arr[i];
            cnt++;
        }
    }
    cout << cnt;
    return 0;
}