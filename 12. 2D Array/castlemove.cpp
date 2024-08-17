#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int dx[4] = {-1, 0, 1, 0};
int dy[4] = {0, 1, 0, -1};

int a[100][100];

int loang(int i, int j, int n){
    a[i][j] = 1;
    int res = 1;
    for (int k = 0; k < 4; k++){
        int x = i + dx[k];
        int y = j + dy[k];
        if (x >= 0 && y >= 0 && x < n && y < n && a[x][y] == 0){
            res += loang(x, y, n);
        }
    }
    return res;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int n, s, t;
    cin >> n >> s >> t;
    s--; t--;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cin >> a[i][j];
        }
    }
    cout << loang(s, t, n);
    return 0;
}