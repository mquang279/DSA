#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

vector<set<int>> adjacencyList(2000);
int visited[2000];
vector<int> path;
int n, m, s, t;


void bfs(int start) {
    queue<int> q;
    q.push(start);
    path.push_back(start);
    while (!q.empty()) {
        int u = q.front();
        q.pop();
        visited[u] = true;
        if (adjacencyList[u].find(t) != adjacencyList[u].end()) {
            path.push_back(t);
            for (int x : path) cout << x << " ";
            return;
        }
        for (int node : adjacencyList[u]) {
            if (!visited[node]) {
                q.push(node);
                path.push_back(node);
            }
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    cin >> n >> m >> s >> t;
    for (int i = 0; i < m; i++) {
        int node1, node2;
        cin >> node1 >> node2;
        adjacencyList[node1].insert(node2);
        adjacencyList[node2].insert(node1);
    }
    bfs(s);
    return 0;
}