#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int n, m;
int a[1000][1000];
int dx[8] = {-1, -1, -1, 0, 0, 1, 1, 1};
int dy[8] = {-1, 0, 1, -1, 1, -1, 0, 1};
bool visited[1000][1000];

bool isValid(int x, int y) {
    for (int i = 0; i < 8; i++) {
        int newX = x + dx[i];
        int newY = y + dy[i];
        if (newX >= 0 && newY >= 0 && newX < n && newY < m && a[newX][newY] > a[x][y]) return false;
    }
    return true;
}

bool floodFill(int x, int y) {
    visited[x][y] = true;
    bool check = true;
    for (int i = 0; i < 8; i++) {
        int newX = x + dx[i];
        int newY = y + dy[i];
        if (newX >= 0 && newY >= 0 && newX < n && newY < m && !visited[newX][newY] && a[newX][newY] == a[x][y]) {
            if (!isValid(newX, newY) || !floodFill(newX, newY)) check = false;
        }
    }
    return check;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }
    int res = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (!visited[i][j] && isValid(i, j) && floodFill(i, j)) {
                res++;
            }
        }
    }
    cout << res;
    return 0;
}