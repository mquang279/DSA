#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int a[200][200];
int dx[8] = { 2, 1, -1, -2, -2, -1, 1, 2 };
int dy[8] = { 1, 2, 2, 1, -1, -2, -2, -1 };

void loang(int n, int i, int j){
    a[i][j] = 0;
    for (int k = 0; k < 8; k++){
        int x = i + dx[k];
        int y = j + dy[k];
        if (x >= 0 && y >= 0 && x < n && y < n && a[x][y] == 1){
            loang(n, x, y);
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int n, s, t, u, v;
    cin >> n >> s >> t >> u >> v;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cin >> a[i][j];
        }
    }
    s--; t--; u--; v--;
    loang(n, s, t);
    if (a[u][v] == 0) cout << "YES";
    else cout << "NO";
    return 0;
}