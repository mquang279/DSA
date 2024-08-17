#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int dx[4] = {-1, 0, 0, 1};
int dy[4] = {0, -1, 1, 0};
int a[102][102];
int n, m;

void loang(int i, int j){
    a[i][j] = 0;
    for (int k = 0; k < 4; k++){
        int x = i + dx[k];
        int y = j + dy[k];
        if (x >= 0 && y >= 0 && x < n && y < m && a[x][y] == 1){
            loang(x, y);
        }
    }
}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);

    cin >> n >> m;
    int s, t, u, v;
    cin >> s >> t >> u >> v;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cin >> a[i][j];
        }
    }
    s--; t--; u--; v--;
    loang(s, t);
    if (a[u][v] == 0) cout << "YES";
    else cout << "NO";
    return 0;
}