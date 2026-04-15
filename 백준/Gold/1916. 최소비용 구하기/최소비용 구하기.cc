#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

const int INF = 987654321;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    vector<vector<pair<int, int>>> graph(n + 1);

    for (int i = 0; i < m; i++) {
        int a, b, c;
        cin >> a >> b >> c;
        graph[a].emplace_back(b, c);
    }

    int start, end;
    cin >> start >> end;

    // 거리 배열 및 이전 노드 배열
    vector<int> dist(n + 1, INF);
    vector<int> prev(n + 1, -1);
    dist[start] = 0;

    // 최소 힙: {거리, 노드번호}
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<>> pq;
    pq.emplace(0, start);

    while (!pq.empty()) 
    {
        auto [cur_dist, u] = pq.top(); // 구조 분해 선언
        pq.pop();
        
        if (cur_dist > dist[u]) 
            continue; // 이미 처리된 노드
        
        for (auto [v, weight] : graph[u]) {
            if (dist[v] > dist[u] + weight) {
                dist[v] = dist[u] + weight;
                //prev[v] = u; 경로 복원용
                pq.emplace(dist[v], v);
            }
        }
    }

    // 결과 출력
    cout << dist[end] << "\n";

    // 경로 출력
    //vector<int> path;
    //for (int v = end; v != -1; v = prev[v])
    //   path.push_back(v);

    //reverse(path.begin(), path.end());

    //cout << "Path: ";
    //for (int v : path)
    //    cout << v << " ";
    

    return 0;
}
