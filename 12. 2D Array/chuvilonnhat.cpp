#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int a[200][200];
int b[200][200];
int dx[4] = {-1, 0, 0, 1};
int dy[4] = {0, -1, 1, 0};

bool check(int i, int j, int n, int m){
    return i >= 0 && j >= 0 && i < n && j < m;
}

int loang(int i, int j, int n, int m){
    a[i][j] = 0;
    int res = 4;
    for (int k = 0; k < 4; k++){
        int x = i + dx[k];
        int y = j + dy[k];
        if (check(x, y, n, m)){
            if (a[x][y] == 1){
                res--;
                res += loang(x, y, n, m);
            }
            else if (b[x][y] == 1){
                res--;
            }
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
    int max_val = 0;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            if (a[i][j] == 1){
                max_val = max(max_val, loang(i, j, n, m));
            }
        }
    }
    cout << max_val;
    return 0;
}