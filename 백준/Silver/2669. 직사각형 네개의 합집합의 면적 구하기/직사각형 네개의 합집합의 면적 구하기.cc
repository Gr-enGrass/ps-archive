#include <iostream>
#include <string>
#include <regex>
using namespace std;

int main()
{
    int lx,ly,rx,ry;
    short arr[100][100]={0};
    for(int i=0;i<4;i++)
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
    
    for(int j=0;j<100;j++)
    {
        for(int k=0;k<100;k++)
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