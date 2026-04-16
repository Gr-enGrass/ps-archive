
#include <iostream>
#include <queue>
using namespace std;

int main()
{
    int t;
    cin >> t;
    
    int m;
    int n;
    
    for(int i=0;i<t;i++)
    {
        int cnt=0;
        cin >> n >> m;
        queue<pair<int,int>> que; //문서 ,중요도
        priority_queue<int> pq;
        for(int j=0;j<n;j++)
        {
            int temp;
            cin >> temp;
            que.push({j,temp});
            pq.push(temp);
        }
        
        while(!que.empty())
        {
            int idx=que.front().first;
            int priority=que.front().second;
            que.pop();
            
            if(pq.top()==priority)//중요도 일치
            {
                pq.pop();
                cnt++;
                
                if(idx==m)
                {
                    
                    cout << cnt << "\n";
                    break;
                }
            }
            else
                que.push({idx,priority});
        }
    }

    return 0;
}