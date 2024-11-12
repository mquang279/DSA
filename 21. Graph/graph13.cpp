#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

bool visited[1001];
vector<vector<int>> adjacencyList(1001);

void DFS(int node){
    visited[node] = true;
    for (int x : adjacencyList[node]){
        if (!visited[x]){
            DFS(x);
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < m; i++){
        int node1, node2;
        cin >> node1 >> node2;
        adjacencyList[node1].push_back(node2);
        adjacencyList[node2].push_back(node1);
    }
    int cnt = 0;
    for (int i = 1; i <= n; i++){
        if (!visited[i]){
            DFS(i);
            cnt++;
        }
    }
    cout << cnt;
    return 0;
}