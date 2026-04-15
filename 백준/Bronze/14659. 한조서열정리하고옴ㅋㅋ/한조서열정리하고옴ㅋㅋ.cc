
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int>mountain(n);
    for(int i =0;i<n;i++)
    {
        cin >> mountain[i];
    }

    int cnt = 0;
    int temp = 0;
    for(int i =0;i<n-cnt;i++)
    {
        temp = 0;
        for(int j = i+1;j<n;j++)
        {
            if(mountain[i]>mountain[j])
            {
                temp++;
            }
            else
            {
                break;
            }
        }
        cnt = max(temp,cnt);
    }
    
    cout << cnt;
    return 0;
}