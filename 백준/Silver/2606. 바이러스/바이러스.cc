
#include <iostream>
#include <vector>

using namespace std;

short graph[101][101];
bool visited[101];
int n,cnt;

void DFS(int x)
{
    visited[x]=true;
    
    for(int i = 1; i<=n; i++)//인접행렬검사
    {
        if(!visited[i]&&graph[x][i]==1)
        {
            cnt++;
            DFS(i);
        }
    }
}

int main()
{
    int m;
    cin >> n >> m ;
    for(int i =0;i<m;i++)
    {
        int a,b;
        cin >> a >> b;
        graph[a][b]=1;
        graph[b][a]=1;
    }
    DFS(1);
    cout << cnt;
    return 0;
}