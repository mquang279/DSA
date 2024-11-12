#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

vector<vector<int>> adjacencyList(2000);
bool visited[2000];
int n, m;

void dfs(int u) {
    visited[u] = true;
    for (int adjNode : adjacencyList[u]) {
        if (!visited[adjNode]) {
            dfs(adjNode);
        }
    }
}

int countConnectedPart() {
    int cnt = 0;
    for (int i = 1; i <= n; i++) {
        if (!visited[i]) {
            cnt++;
            dfs(i);
        }
    }
    return cnt;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    cin >> n >> m;
    for (int i = 0; i < m; i++) {
        int node1, node2;
        cin >> node1 >> node2;
        adjacencyList[node1].push_back(node2);
        adjacencyList[node2].push_back(node1);
    }
    int res = 0;
    for (int i = 1; i <= n; i++) {
        memset(visited, false, sizeof(visited));
        visited[i] = true;
        if (countConnectedPart() > 1) res++;
    }
    cout << res;
    return 0;
}