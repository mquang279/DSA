/*
[Hàng Đợi]. Bài 17. Di chuyển trong ma trận
Cho ma trận A[M][N]. Nhiệm vụ của bạn hãy tìm số bước đi ít nhất 
dịch chuyển từ vị trí A[1][1] đến vị trí A[M][N].
Biết mỗi bước đi ta chỉ được phép dịch chuyển từ ô A[i][j] đến vị trí 
A[i][j+A[i][j]] hoặc vị trí A[i+A[i][j]][j] bên trong ma trận.

Đầu vào:
-Dòng đầu tiên đưa vào số lượng test T.
-Dòng tiếp theo đưa vào các bộ test.
-Mỗi bộ test gồm hai phần: phần thứ nhất là hai số M, N; phần thứ hai là các phần tử của ma trận A[][], các số được viết cách nhau một vài khoảng trống.
Đầu ra:
-Đưa ra kết quả mỗi test theo từng dòng. In ra -1 nếu không tìm được đáp án.

Giới hạn:
1≤T≤100.
1≤M, N, A[i][j]≤10^3.

Ví dụ :
Input 01
Copy
1
3  3
2  1  2
1  1  1
1  1  1
Output 01
Copy
2
*/

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

bool visited[500][500];

int minimumSteps(int a[500][500], int n, int m) {
    queue<pair<pair<int, int>, int>> q;
    q.push({{0, 0}, 0});
    while (!q.empty()) {
        pair<pair<int, int>, int> tmp = q.front();
        q.pop();
        int x = tmp.first.first;
        int y = tmp.first.second;
        int step = tmp.second;
        if (x == n - 1 && y == m - 1) return step;
        if (x + a[x][y] < n && !visited[x + a[x][y]][y]) {
            q.push({{x + a[x][y], y}, step + 1});
            visited[x + a[x][y]][y] = true;
        }
        if (y + a[x][y] < m && !visited[x][y + a[x][y]]) {
            q.push({{x, y  + a[x][y]}, step + 1});
            visited[x][y + a[x][y]] = true;
        }
    }
    return -1;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        int a[500][500];
        for (int i = 0; i < n; i++){
            for (int j = 0; j < m; j++){
                cin >> a[i][j];
            }
        }
        cout << minimumSteps(a, n, m) << endl;
    }
    return 0;
}