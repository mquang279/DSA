#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<int, int> ii;

int dx[8] = {-1, -1, -1, 0, 0, 1, 1, 1};
int dy[8] = {-1, 0, 1, -1, 1, -1, 0, 1};
bool visited[1001][1001];
ll dist[1001][1001];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int n;
    cin >> n;
    int s, t, u, v;
    cin >> s >> t >> u >> v;
    s -= 1;
    t -= 1;
    u -= 1;
    v -= 1;
    int a[n][n];
    int dist[n][n] = {0};
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }
    queue<ii> q;
    q.push({s, t});
    visited[s][t] = true;
    while (!q.empty()) {
        ii pos = q.front();
        q.pop();
        int currentX = pos.first;
        int currentY = pos.second;
        for (int i = 0; i < 8; i++) {
            int x = currentX + dx[i];
            int y = currentY + dy[i];
            if (x >= 0 && y >= 0 && x < n && y < n && !visited[x][y] && a[x][y] == 1) {
                q.push({x, y});
                visited[x][y] = true;
                dist[x][y] = dist[currentX][currentY] + 1;
            }
        }
    }
    if (dist[u][v] == 0) {
        cout << -1;
    } else {
        cout << dist[u][v];
    }
    return 0;
}