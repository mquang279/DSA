#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int res;
int n, m;
int a[200][200];

void loang(int x, int y){
    if (x >= n || y >= m || a[x][y] != 1) return;
    if (x == n - 1 && y == m - 1){
        res++;
        return;
    }
    a[x][y] = 0;
    loang(x + 1, y);
    loang(x, y + 1);
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    cin >> n >> m;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cin >> a[i][j];
        }
    }
    loang(0, 0);
    cout << res;
    return 0;
}