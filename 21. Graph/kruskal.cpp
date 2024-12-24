#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int n, m;
int parent[1000005], sz[1000005];
vector<vector<int>> edgeLists;

bool cmp(vector<int> a, vector<int> b) {
    return a[2] < b[2];
}

void init() {
    for (int i = 1; i <= n; i++) {
        parent[i] = i;
        sz[i] = 1;
    }
}

int find(int u) {
    if (parent[u] == u) return u;
    return parent[u] = find(parent[u]);
}

bool Union(int u, int v) {
    u = find(u);
    v = find(v);
    if (u == v) return false;
    if (u != v) {
        if (sz[u] < sz[v]) {
            parent[u] = v;
            sz[v] += sz[u];
        } else {
            parent[v] = u;
            sz[u] += sz[v];
        }
        return true;
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    cin >> n >> m;
    init();
    for (int i = 0; i < m; i++) {
        int vertex1, vertex2, weight;
        cin >> vertex1 >> vertex2 >> weight;
        edgeLists.push_back({vertex1, vertex2, weight});
    }
    sort(edgeLists.begin(), edgeLists.end(), cmp);
    ll res = 0;
    set<int> check;
    for (vector<int> edge : edgeLists) {
        if (Union(edge[0], edge[1])) {
            check.insert(edge[0]);
            check.insert(edge[1]);
            res += edge[2];
        }
    }
    if (check.size() != n) cout << "IMPOSSIBLE";
    else cout << res;
    return 0;
}
