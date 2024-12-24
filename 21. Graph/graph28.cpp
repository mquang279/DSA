#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

vector<int> adjList[2000];
bool visited[2000];
int res = INT_MAX;
int maxRelationship = 0;

void dfs(int u) {
    visited[u] = true;
    int currentRelationship = adjList[u].size();
    if ((currentRelationship > maxRelationship) 
            || (currentRelationship == maxRelationship && u < res)) {
        res = u;
        maxRelationship = currentRelationship;
    }
    for (int adjNode : adjList[u]) {
        if (!visited[adjNode]) {
            dfs(adjNode);
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < m; i++) {
        int node1, node2;
        cin >> node1 >> node2;
        adjList[node1].push_back(node2);
        adjList[node2].push_back(node1);
    }
    set<int> leaders;
    for (int i = 1; i <= n; i++) {
        if (!visited[i]) {
            res = INT_MAX;
            maxRelationship = 0;
            dfs(i);
            leaders.insert(res);
        }
    }
    for (int leader : leaders) {
        cout << leader << " ";
    }
    return 0;
}