#include <iostream>

using namespace std;

int n,m;
int arr[8];

void ang(int x,int cnt)
{
    if(x==m)
    {
        for(int i =0;i<m;i++)
        {
            cout << arr[i] << ' ';
        }
        cout << '\n';
        return;
    }
    
    for(int i = cnt;i<n;i++)
    {
        arr[x]=i+1;
        ang(x+1,i);
    }
}

int main()
{
    cin >> n >> m;
    ang(0,0);

    return 0;
}