
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n,k;
    cin >> n >> k;
    vector<int> arr;
    while(n--)
    {
        int temp;
        cin >> temp;
        arr.push_back(temp);
    }
    int cnt = 0;
    for(int i = 0;i<arr.size()-1;i++)
    {
       for(int j = 1;j<arr.size()-i;j++)
       {
           if(arr[j-1]>arr[j])
           {
               cnt++;
               arr[j-1]^=arr[j];
               arr[j]^=arr[j-1];
               arr[j-1]^=arr[j];
               if(cnt==k)
               {
                   for(const int &a : arr)
                   {
                       cout << a << ' ';
                   }
                   return 0;
               }
           }
       }
    }
    cout << "-1";
    return 0;
}