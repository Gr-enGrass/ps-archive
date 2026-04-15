
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int cnt =0;
    vector<pair<int,int>>vec;
    for(int i =0;i<n;i++)
    {
        int temp1 ,temp2;
        cin >> temp1 >> temp2;
        vec.push_back(make_pair(temp1,temp2));
    }
    
    for(int i =0;i<n;i++)
    {
        bool check1 = true;
        bool check2 = true;
        for(int j =0;j<n;j++)
        {
            if(i==j)
                continue;
            if(vec[i].first>vec[j].first)
            {
                if(vec[i].second>=vec[j].second)
                {
                    check1 = false;
                    break;
                }
            }
            else if(vec[i].second>vec[j].second)
            {
                if(vec[i].first>=vec[j].first)
                {
                    check2 = false;
                    break;
                }
            }
        }
        if(check1&&check2)
            cnt++;
    }
    cout << cnt;
    

    return 0;
}