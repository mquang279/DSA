#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int dx[8] = {-1, -1, -1, 0, 0, 1, 1, 1};
int dy[8] = {-1, 0, 1, -1, 1, -1, 0, 1};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int n, m;
    cin >> n >> m;
    int a[n][m];
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cin >> a[i][j];
        }
    }
    int cnt = 0;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            bool check = true;
            for (int k = 0; k < 8; k++){
                int x = i + dx[k];
                int y = j + dy[k];
                if (x >= 0 && y >= 0 && x < n && y < m && a[x][y] >= a[i][j]){
                    check = false;
                    break;
                }
            }
            if (check) cnt++;
        }
    }
    cout << cnt;
    return 0;
}