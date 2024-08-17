#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int dx[4] = {-1, 0, 0, 1};
int dy[4] = {0, -1, 1, 0};
int a[200][200];
int b[200][200];

bool check(int x, int y, int n, int m){
    return x >= 0 && y >= 0 && x < n && y < m;
}

int loang(int i, int j, int n, int m){
    int res = 4;
    a[i][j] = 0;
    for (int k = 0; k < 4; k++){
        int x = i + dx[k];
        int y = j + dy[k];
        if (check(x, y, n, m) && a[x][y] == 1){
            res -= 1;
            res += loang(x, y, n, m);
        }
        else if (check(x, y, n, m) && b[x][y] == 1){
            res--;
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
            b[i][j] = a[i][j];
        }
    }
    multiset<int> se;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            if (a[i][j] == 1){
                cout << loang(i, j, n, m) << " ";
            }
        }
    }
    return 0;
}