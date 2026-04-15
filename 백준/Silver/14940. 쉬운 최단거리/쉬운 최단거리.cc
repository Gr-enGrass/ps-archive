
#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;

int n,m;
vector<vector<int>> BFS(const vector<vector<int>>& a,int start_x,int start_y)
{
    int x[4]={-1,1,0,0};
    int y[4]={0,0,-1,1};
    vector<vector<bool>> isVisited(n+2, vector<bool>(m+2, false));
    queue<pair<int,int>>q;
    vector<vector<int>>result(n+2,vector<int>(m+2,0));
    
    q.push(make_pair(start_x,start_y));
    isVisited[start_x][start_y]=true;
    
    while(!q.empty())
    {
        int xx = q.front().first;
        int yy = q.front().second;
        q.pop();
        
        for(int i =0;i<4;i++)
        {
            if(a[xx+x[i]][yy+y[i]]!=-2 && a[xx+x[i]][yy+y[i]]!=0 && !isVisited[xx+x[i]][yy+y[i]])
            {
                q.push(make_pair(xx+x[i],yy+y[i]));
                isVisited[xx+x[i]][yy+y[i]]=true;
                result[xx+x[i]][yy+y[i]]=result[xx][yy] + 1;
            }
        }
    }
    for(int i =1;i<=n;i++)
    {
        for(int j =1;j<=m;j++)
        {
            if(!isVisited[i][j]&&a[i][j])
            {
                result[i][j]=-1;
            }
        }
    }
    return result;
}

int main()
{
    cin >> n >> m;
    vector<vector<int>>a(n+2,vector<int>(m+2,-2));
    int start_x;
    int start_y;
    for(int i =1;i<=n;i++)
    {
        for(int j =1;j<=m;j++)
        {
            int check;
            cin >> check;
            if(check==2)
            {
                start_x = i;
                start_y = j;
            }
            a[i][j]=check;
        }
    }
    
    vector<vector<int>> result = BFS(a, start_x, start_y);
    
    for(int i =1;i<=n;i++)
    {
        for(int j =1;j<=m;j++)
        {
            cout << result[i][j] << ' ';
        }
        cout << '\n';
    }
    
    return 0;
}