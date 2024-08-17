#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

char a[200][200];
int dx[4] = {-1, 0, 0, 1};
int dy[4] = {0, -1, 1, 0};

int loang(int i, int j, int n, int m){
    a[i][j] = '.';
    int res = 1;
    for (int k = 0; k < 4; k++){
        int x = i + dx[k];
        int y = j + dy[k];
        if (x >= 0 && y >= 0 && x < n && y < m && a[x][y] == '*'){
            res += loang(x, y, n, m);
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
    multiset<int> area;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            if (a[i][j] == '*'){
                area.insert(loang(i, j, n, m));
            }
        }
    }
    for (int x : area){
        cout << x << " ";
    }
    return 0;
}