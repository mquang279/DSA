/*
- Đỉnh là các ô vuông của lưới.
- Tại đỉnh A, với đỉnh liền kề B. Nếu B cao hơn A không quá MaxU centimet
hoặc B thấp hơn A không quá MaxD centimet thì có cạnh có hướng từ A sang B.
- Đây là đồ thị có hướng và không có trọng số.
- Thuật toán dựa trên giải thuật DFS.
*/

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int dx[4] = {-1, 0, 0, 1};
int dy[4] = {0, -1, 1, 0};
bool visited[100][100];
int cnt;

bool canMove(int x, int y, int destX, int destY, int n, int h[100][100], int maxU, int maxD) {
    if (destX < 0 || destY < 0 || destX >= n || destY >= n || visited[destX][destY]) {
        return false;
    }
    if (h[destX][destY] > h[x][y] && h[destX][destY] - h[x][y] > maxU) {
        return false;
    }
    if (h[destX][destY] < h[x][y] && h[x][y] - h[destX][destY] > maxD) {
        return false;
    }
    return true;
}

void exploreMap(int x, int y, int n, int h[100][100], int maxU, int maxD) {
    visited[x][y] = true;
    cnt++;
    cout << x << " " << y << endl;
    for (int i = 0; i < 4; i++) {
        int destX = x + dx[i];
        int destY = y + dy[i];
        if (canMove(x, y, destX, destY, n, h, maxU, maxD)) {
            exploreMap(destX, destY, n, h, maxU, maxD);
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int n;
    cin >> n;
    int h[100][100];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> h[i][j];
        }
    }
    int maxU, maxD;
    cin >> maxU >> maxD;
    exploreMap(1, 2, n, h, maxU, maxD);
    cout << cnt;
    return 0;
}