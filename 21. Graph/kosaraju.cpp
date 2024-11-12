#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

vector<vector<int>> adjacencyList(20000), transposeList(20000);
bool visited[20000];
stack<int> st;
int n, m;

void dfs1(int node) {
    visited[node] = true;
    for (int adjNode : adjacencyList[node]) {
        if (!visited[adjNode]) {
            dfs1(adjNode);
        }
    }
    st.push(node);
}

void dfs2(int node) {
    visited[node] = true;
    for (int adjNode : transposeList[node]) {
        if (!visited[adjNode]) {
            dfs2(adjNode);
        }
    }
}

void kosaraju() {
    for (int i = 1; i <= n; i++) {
        if (!visited[i]) {
            dfs1(i);
        }
    }

    memset(visited, false, sizeof(visited));
    int cnt = 0;
    while (!st.empty()) {
        int u = st.top();
        if (!visited[u]) {
            cnt++;
            dfs2(u);
        }
        st.pop();
    }
    if (cnt == 1) cout << 1;
    else cout << 0;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    cin >> n >> m;
    for (int i = 0; i < m; i++) {
        int node1, node2;
        cin >> node1 >> node2;
        adjacencyList[node1].push_back(node2);
        transposeList[node2].push_back(node1);
    }
    kosaraju();
    return 0;
}