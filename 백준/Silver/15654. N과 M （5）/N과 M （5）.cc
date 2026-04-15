#include <iostream>
#include <algorithm>
using namespace std;

int n,m;
int arr[8];
bool isUsed[8];
int result[8];


void ang(int x)
{
    if(x==m)
    {
        for(int i =0;i<m;i++)
        {
            cout << result[i] << ' ';
        }
        cout << '\n';
        return;
    }
    
    for(int i = 0;i<n;i++)
    {
        if(!isUsed[i])
        {
            result[x]=arr[i];
            isUsed[i]=true;
            ang(x+1);
            isUsed[i]=false;
        }
    }
}

int main()
{
    cin >> n >> m;
    for(int i =0;i<n;i++)
    {
        cin >> arr[i];
    }
    sort(arr,arr+n);
    ang(0);

    return 0;
}