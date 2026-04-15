#include <iostream>

using namespace std;

int n,m;
int arr[8];
bool isUsed[8];

void ang(int x,int idx)
{
    if(x==m)
    {
        for(int i =0;i<m;i++)
        {
            cout << arr[i] << ' ';
        }
        cout << '\n';
    }
    
    for(int i = idx;i<n;i++)
    {
        if(!isUsed[i])
        {
            arr[x]=i+1;
            isUsed[i]=true;
            ang(x+1,i+1);
            isUsed[i]=false;
        }
    }
}


int main()
{
    cin >> n >> m;
    ang(0,0);

    return 0;
}