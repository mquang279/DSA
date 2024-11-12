#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

vector<set<int>> adjacencyList(2000);
bool visited[2000];
stack<int> st;

void dfs(int node) {
    visited[node] = true;
    for (int adjNode : adjacencyList[node]) {
        if (!visited[adjNode]) {
            dfs(adjNode);
        }
    }
    st.push(node);
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < m; i++) {
        int node1, node2;
        cin >> node1 >> node2;
        adjacencyList[node1].insert(node2);
    }
    for (int i = 1; i <= n; i++) {
        if (!visited[i]) {
            dfs(i);
        }
    }
    while (!st.empty()) {
        cout << st.top() << " ";
        st.pop();
    }
    return 0;
}