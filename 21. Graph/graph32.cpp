#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int dx[4] = {-1, 0, 0, 1};
int dy[4] = {0, -1, 1, 0};
bool visited[1001][1001];
int n, m;
char a[1001][1001];

void loang(int x, int y, int& area) {
    visited[x][y] = true;
    area++;
    for (int i = 0; i < 4; i++) {
        int newX = x + dx[i];
        int newY = y + dy[i];
        if (newX >= 0 && newY >= 0 && newX < n && newY < m && !visited[newX][newY] && a[newX][newY] == '.') {
            loang(newX, newY, area);
        }
    }
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
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (a[i][j] == '.' && !visited[i][j]) {
                int area = 0;
                loang(i, j, area);
                cout << area << " ";
            }
        }
    }
    return 0;
}