
#include <iostream>
#include <vector>
#include <queue>
using namespace std;

bool CanGo[102][102]={};
bool visited[102][102]={};
int path[102][102] = {};

void BFS()
{
    queue <pair<int,int>> q;
    q.push(make_pair(1,1));
    visited[1][1] = true;
    path[1][1] = 1;
    
    while(!q.empty())
    {
        int x = q.front().first;
        int y = q.front().second;
        q.pop();
        
        if(CanGo[x-1][y] && !visited[x-1][y])//상
        {
            q.push(make_pair(x-1,y));
            visited[x-1][y] = true;
            path[x-1][y] = path[x][y] + 1;
        }
        if(CanGo[x+1][y] && !visited[x+1][y])//하
        {
            q.push(make_pair(x+1,y));
            visited[x+1][y] = true;
            path[x+1][y] = path[x][y] + 1;
        }
        if(CanGo[x][y-1] && !visited[x][y-1])//좌
        {
            q.push(make_pair(x,y-1));
            visited[x][y-1] = true;
            path[x][y-1] = path[x][y] + 1;
        }
        if(CanGo[x][y+1] && !visited[x][y+1])//우
        {
            q.push(make_pair(x,y+1));
            visited[x][y+1] = true;
            path[x][y+1] = path[x][y] + 1;
        }
        
    }
}

int main()
{
    int n,m;
    cin >> n >>m;
    for(int i = 1; i<= n;i++)
    {
        string temp;
        cin >> temp;
        for(int j = 1;j<=m;j++)
        {
            CanGo[i][j] = temp[j-1] - '0';
        }
    }
    BFS();
    cout << path[n][m];
    return 0;
}