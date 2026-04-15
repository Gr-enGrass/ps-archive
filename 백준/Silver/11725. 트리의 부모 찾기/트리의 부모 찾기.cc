
#include <iostream>
#include <vector>

#define MAX 100001

using namespace std;

vector <int> graph[MAX];
int n;
int result[MAX];
bool visited[MAX];

void DFS(int x)
{
    visited[x]=true;
    int size = graph[x].size();
    for(int i = 0;i<size;i++)
    {
        int nextnode = graph[x][i];
        if(!visited[nextnode])
        {
            result[nextnode] = x;
            DFS(nextnode);
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    cin >> n;
    for(int i =0;i<n;i++)
    {
        int node1,node2;
        cin >> node1 >> node2;
        graph[node1].push_back(node2);
        graph[node2].push_back(node1);
    }
    
    DFS(1);
    
    for(int i = 2;i<=n;i++)
    {
        cout << result[i] << '\n';
    }
    return 0;
}