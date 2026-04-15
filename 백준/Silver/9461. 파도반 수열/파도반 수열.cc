
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin >> t;
    vector<long long int>arr(100,0);
    arr[0]=1;
    arr[1]=1;
    arr[2]=1;
    arr[3]=2;
    arr[4]=2;
    for(int i =5;i<100;i++)
    {
        arr[i]=arr[i-1]+arr[i-5];
    }
    while(t--)
    {
        int n;
        cin >> n;
        
        cout << arr[n-1] << '\n';
    }

    return 0;
}