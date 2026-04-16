#include <iostream>
#include <deque>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
	cin.tie(0);
    
    int n;
    cin >> n;
    int check;
    deque<pair<int,int>>bal;

    for (int i = 0; i < n; i++) 
    {
        cin >> check;
        bal.push_back(make_pair(i+1,check));
    }
    
    while(!bal.empty())
    {
        int cnt = bal.front().second;
        cout << bal.front().first << " ";
        bal.pop_front();
    
    if(cnt>0)
    {
        for(int i=0;i<cnt-1;i++)
        {
            bal.push_back(bal.front());
            bal.pop_front();
        }
    }
    else
    {
        for(int i=0; i<abs(cnt);i++)
        {
            bal.push_front(bal.back());
            bal.pop_back();
        }
    }
        
    }
    return 0;
}