#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

vector<vector<int>> adjacencyList(1001);
bool visited[1001];

void BFS(int start){
    queue<int> q;
    q.push(start);
    visited[start] = true;
    cout << start << " ";
    while (!q.empty()){
        int v = q.front();
        q.pop();
        sort(adjacencyList[v].begin(), adjacencyList[v].end());
        for (int adjacencyNode : adjacencyList[v]){
            if (!visited[adjacencyNode]){
                q.push(adjacencyNode);
                visited[adjacencyNode] = true;
                cout << adjacencyNode << " ";
            }
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int n, m, s;
    cin >> n >> m >> s;
    for (int i = 0; i < m; i++){
        int node1, node2;
        cin >> node1 >> node2;
        adjacencyList[node1].push_back(node2);
        adjacencyList[node2].push_back(node1);
    }
    BFS(s);
    return 0;
}