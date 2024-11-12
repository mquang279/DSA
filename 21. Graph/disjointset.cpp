#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int n, parent[2000], sz[2000];
// sz[i] : chứa số lượng phần tử trong tập hợp do i quản lý.

void init() {
    for (int i = 1; i <= n; i++) {
        parent[i] = i;
        sz[i] = 1;
    }
}

int Find(int u) {
    if (u == parent[u]) {
        return u;
    }
    return parent[u] = Find(parent[u]);
}

bool Union(int u, int v) {
    u = Find(u);
    v = Find(v);
    if (u == v) return false;
    if (sz[u] > sz[v]) {
        parent[v] = u;
        sz[u] += sz[v];
    } else {
        parent[u] = v;
        sz[v] += sz[u];
    }
    return true;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    cin >> n;
    
    return 0;
}