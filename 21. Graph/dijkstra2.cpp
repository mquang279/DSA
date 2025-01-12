#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

vector<pair<int, int>> adjacencyLists[1001];
vector<int> dist(1001, INT_MAX);
bool visited[1001];

void dijkstra(int start) {
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    dist[start] = 0;
    pq.push({0, start});
    while (!pq.empty()) {
        int u = pq.top().second;
        pq.pop();
        if (!visited[u]) {
            visited[u] = true;
            for (auto edge : adjacencyLists[u]) {
                int v = edge.first;
                int weight = edge.second;
                if (dist[u] + weight < dist[v]) {
                    dist[v] = dist[u] + weight;
                    pq.push({dist[v], v});
                }
            }
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int n, m, s;
    cin >> n >> m >> s;
    for (int i = 0; i < m; i++) {
        int vertex1, vertex2, weight;
        cin >> vertex1 >> vertex2 >> weight;
        adjacencyLists[vertex1].push_back({vertex2, weight});
        adjacencyLists[vertex2].push_back({vertex1, weight});
    }
    for (int i = 1; i <= n; i++) {
        dist[i] = INT_MAX;
    }
    dijkstra(s);
    for (int i = 1; i <= n; i++) {
        if (dist[i] == INT_MAX) dist[i] = 0;
        cout << dist[i] << " ";
    }
    return 0;
}