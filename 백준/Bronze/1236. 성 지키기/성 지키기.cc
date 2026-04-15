
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n,m;
    bool arr[50][50]={};
    cin >> n >>m;
    for(int i =0;i<n;i++)
    {
        for(int j =0;j<m;j++)
        {
            char temp;
            cin>> temp;
            if(temp=='X')
            {
                arr[i][j]=true;
            }
        }
    }
    int cnt1 = 0;
    bool check;
    for(int i =0;i<n;i++)
    {
        check = false;
        for(int j =0;j<m;j++)
        {
            if(arr[i][j])
            {
                check = true;
            }
        }
        if(!check)
        {
            cnt1++;
        }
    }
    int cnt2 = 0;
    for(int i = 0;i<m;i++)
    {
        check = false;
        for(int j =0;j<n;j++)
        {
            if(arr[j][i])
            {
                check = true;
            }
        }
        if(!check)
        {
            cnt2++;
        }
    }
    cout << max(cnt1,cnt2);
    return 0;
}