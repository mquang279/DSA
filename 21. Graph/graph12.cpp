#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

vector<set<int>> adjacencyList(500000);
bool visited[500000];

void bfs(int node) {
    queue<int> q;
    q.push(node);
    visited[node] = true;
    while (!q.empty()) {
        int u = q.front();
        cout << u << " ";
        q.pop();
        for (int adjNode : adjacencyList[u]) {
            if (!visited[adjNode]) {
                q.push(adjNode);
                visited[adjNode] = true;
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
        int node1, node2;
        cin >> node1 >> node2;
        adjacencyList[node1].insert(node2);
    }
    bfs(s);
    return 0;
}