#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int n, m;
vector<int> adjacencyList[1001];
int a[1001];
int res;
int cnt;

void dfs(int s, bool isValid) {
    bool check = false;
    if (a[s] == 0) cnt = 0;
    else {
        check = true;
        cnt++;
        if (cnt > m) return;
    }
    if (adjacencyList[s].size() == 0 && isValid) {
        res++;
    }
    for (int adjVertex: adjacencyList[s]) {
        dfs(adjVertex, isValid);
    }
    if (check) {
        cnt--;
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < n - 1; i++) {
        int vertex1, vertex2;
        cin >> vertex1 >> vertex2;
        adjacencyList[vertex1].push_back(vertex2);
    }
    dfs(1, true);
    cout << res;
    return 0;
}