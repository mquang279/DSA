#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int n, m, s, t;

vector<set<int>> adjacencyList(2000);
bool visited[2000];
vector<int> path;
bool hasPath;

void dfs(int u) {
    visited[u] = true;
    path.push_back(u);
    if (u == t) {
        for (int x : path) cout << x << " ";
        hasPath = true;
        return;
    }
    for (int adjNode : adjacencyList[u]) {
        if (!visited[adjNode]) {
            dfs(adjNode);
        }
    }
    path.pop_back();
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    cin >> n >> m >> s >> t;
    for (int i = 0; i < m; i++) {
        int node1, node2;
        cin >> node1 >> node2;
        adjacencyList[node1].insert(node2);
    }
    dfs(s);
    if (!hasPath) cout << -1;
    return 0;
}