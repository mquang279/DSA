#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int n, m, s;
vector<pair<int, int>> adjacencyLists[100005];
int dist[100005];
bool visited[100005];

void dijkstra(int s) {
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> q;
    q.push({0, s});
    while (!q.empty()) { 
        pair<int, int> tmp = q.top();
        q.pop(); 
        int vertex = tmp.second;
        int currentDist = tmp.first;
        if (dist[vertex] > currentDist) {
            dist[vertex] = currentDist;
            visited[vertex] = true;
            for (auto it : adjacencyLists[vertex]) {
                if (!visited[it.first]) {
                    q.push({currentDist + it.second, it.first});
                }
            }
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
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
        cout << dist[i] << " ";
    }
    return 0;
}