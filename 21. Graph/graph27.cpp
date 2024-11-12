#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int n, m;
int parent[2000], sz[2000], maxSize;

void init() {
    for (int i = 1; i <= n; i++) {
        parent[i] = i;
        sz[i] = 1;
    }
}

int Find(int u) {
    if (u == parent[u]) return u;
    return parent[u] = Find(parent[u]);
}

void Union(int u, int v) {
    u = Find(u);
    v = Find(v);
    if (u != v) {
        if (sz[u] < sz[v]) {
            sz[v] += sz[u];
            maxSize = max(maxSize, sz[v]);
            parent[u] = v;
        } else {
            sz[u] += sz[v];
            maxSize = max(maxSize, sz[u]);
            parent[v] = u;
        }
    }
}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    cin >> n >> m;
    init();
    for (int i = 0; i < m; i++) {
        int node1, node2;
        cin >> node1 >> node2;
        Union(node1, node2);
    }
    cout << maxSize;
    return 0;
}