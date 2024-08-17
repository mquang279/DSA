#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int dx[8] = {-1, -1, -1, 0, 0, 1, 1, 1};
int dy[8] = {-1, 0, 1, -1, 1, -1, 0, 1};
int n, m, a[200][200];
int currTop, currBottom, currLeft, currRight, currArea = 0;

void loang(int x, int y){
    a[x][y] = 0;
    currArea++;
    currTop = min(currTop, x);
    currBottom = max(currBottom, x);
    currLeft = min(currLeft, y);
    currRight = max(currRight, y);
    for (int k = 0; k < 8; k++){
        int newX = x + dx[k];
        int newY = y + dy[k];
        if (newX >= 0 && newY >= 0 && newX < n && newY < m && a[newX][newY] == 1){
            loang(newX, newY);
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
    int cnt = 0;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            if (a[i][j] == 1){
                currTop = currBottom = i;
                currRight = currLeft = j;
                currArea = 0;
                loang(i, j);
                if (currArea == (currRight - currLeft + 1) * (currBottom - currTop + 1)) cnt++;
            }
        }
    }
    cout << cnt;
    return 0;
}