#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int a[501][501];
int dx[4] = {-1, 0, 0, 1};
int dy[4] = {0, -1, 1, 0};

int loang(int n, int m, int i, int j){
    int res = 1;
    a[i][j] = 0;
    for (int k = 0; k < 4; k++){
        int x = i + dx[k];
        int y = j + dy[k];
        if (x >= 0 && y >= 0 && x < n && y < m && a[x][y] == 1){
            res += loang(n, m, x, y);
        }
    }
    return res;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cin >> a[i][j];
        }
    }
    int res = 0;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            if (a[i][j] == 1){
                res = max(res, loang(n, m, i, j));
            }
        }
    }
    cout << res;
    return 0;
}