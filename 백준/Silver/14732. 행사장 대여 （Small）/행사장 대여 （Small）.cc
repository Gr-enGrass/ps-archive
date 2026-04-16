#include <iostream>
#include <string>
#include <regex>
using namespace std;

int main()
{
    int lx,ly,rx,ry;
    short arr[500][500]={0};
    int n;
    cin >> n;
    
    for(int i=0;i<n;i++)
    {
        cin >> lx >> ly >> rx >> ry;
        
        for(int j=lx;j<rx;j++)
        {
            for(int k=ly;k<ry;k++)
            {
                arr[j][k]++;
            }
        }
    }
    
    int cnt=0;
    
    for(int j=0;j<500;j++)
    {
        for(int k=0;k<500;k++)
        {
            if(arr[j][k]!=0)
            {
                cnt++;
            }
        }
    }
    cout << cnt;
    
    return 0;
}