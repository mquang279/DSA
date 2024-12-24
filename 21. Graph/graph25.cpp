/*
[Đồ thị]. Bài 25. Đếm số phòng
Bạn được đưa cho một bản đồ của một tòa nhà và nhiệm vụ 
của bạn là đếm số lượng phòng của tòa nhà đó.

Kích thước của bản đồ là n × m hình vuông và mỗi hình vuông 
là sàn hoặc tường. Bạn có thể đi bộ sang trái, phải, lên và xuống qua các ô sàn.

Đầu vào:
- Dòng nhập đầu tiên có hai số nguyên n và m: chiều cao và chiều rộng của bản đồ.
- Khi đó có n dòng gồm m ký tự mô tả bản đồ. 
- Mỗi ký tự là một trong hai ký tự '.' hoặc '#' tương ứng với sàn nhà và tường.
Đầu ra:
- In ra số nguyên duy nhất là số phòng của tòa nhà

Giới hạn
1≤n,m≤1000

Ví dụ :
Input 01:
6 6
..###.
...#..
#..#..
.##.#.
######
.#.##.
Output 01:
7
*/

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int dx[4] = {-1, 0, 0, 1};
int dy[4] = {0, -1, 1, 0};

int n, m;
char a[1001][1001];
bool visited[1001][1001];

void floodFill(int i, int j) {
    visited[i][j] = true;
    for (int k = 0; k < 4; k++) {
        int x = i + dx[k];
        int y = j + dy[k];
        if (x >= 0 && y >= 0 && x < n && y < m && !visited[x][y] && a[x][y] == '.') {
            floodFill(x, y);
        }
    }
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
            if (a[i][j] == '.' && !visited[i][j]) {
                res++;
                floodFill(i, j);
            }
        }
    }
    cout << res;
    return 0;
}