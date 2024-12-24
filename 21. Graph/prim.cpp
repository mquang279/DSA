#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int n, m;
vector<pair<int, int>> adjacencyLists[100005];
bool used[100005];

void Prim(int s) {
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> q;
    used[s] = true;
    for (auto it : adjacencyLists[s]) {
        q.push({it.second, it.first});
    }
    ll pathSum = 0, cnt = 0;
    while (!q.empty()) {
        pair<int, int> tmp = q.top();
        q.pop();
        int vertex = tmp.second;
        int weight = tmp.first;
        if (!used[vertex]) {
            pathSum += weight;
            cnt++;
            used[vertex] = true;
            for (auto edge : adjacencyLists[vertex]) {
                if (!used[edge.first]) q.push({edge.second, edge.first});
            }
        }
    }
    if (cnt == n - 1) cout << pathSum;
    else cout << "IMPOSSIBLE";
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    cin >> n >> m;
    for (int i = 0; i < m; i++) {
        int vertex1, vertex2, weight;
        cin >> vertex1 >> vertex2 >> weight;
        adjacencyLists[vertex1].push_back({vertex2, weight});
        adjacencyLists[vertex2].push_back({vertex1, weight});
    }
    Prim(1);
    return 0;
}