
#include <iostream>
#include <queue>
#include <string.h>
using namespace std;

short graph[1001][1001];
bool visited[1001];
int n,m,v;

void dfs(int x)
{
    visited[x]=true;//방문 표시
    cout << x << " ";//정점 출력
    
    for(int i=1;i<=n;i++)//인접행렬 검사
    {
        if(graph[x][i]==1&&!visited[i])
        {
            dfs(i);
        }
    }
}

void bfs(int x)
{
    queue<short>q;
    q.push(x);
    while(!q.empty())
    {
        int temp = q.front();
        visited[temp]=true;//방문 표시
        cout << temp << " ";//정점 출력
        q.pop();//정점 삭제
        
        for(int i=1;i<=n;i++)
        {
            if(graph[temp][i]==1&&!visited[i])
            {
                q.push(i);//정점 추가
                visited[i]=true;//방문 표시
            }
        }
    }
}

int main()
{
    cin >> n >> m >> v;
    int a,b;
    
    while(m--)
    {
        cin >> a >> b;
        
        graph[a][b]=1;
        graph[b][a]=1;
    }
    dfs(v);
    cout<< "\n";
    memset(visited,0,sizeof(visited));//방문기록 초기화
    bfs(v);
    return 0;
}