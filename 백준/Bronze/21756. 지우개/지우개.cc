
#include <iostream>
#include <map>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[101]={};
    for(int i =1;i<=n;i++)
    {
        arr[i]=i;
    }
    
    while(n>1)
    {
        int cnt = 1;
        for(int i = 2;i<=n;i+=2)
        {
            arr[cnt++]=arr[i];
        }
        n = cnt-1;
    }
    cout << arr[1];
    return 0;
}