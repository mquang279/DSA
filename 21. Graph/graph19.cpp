/*
[Đồ thị]. Bài 19. Đỉnh trụ
Cho đồ thị vô hướng G = (V, E) được biểu diễn dưới dạng danh sách cạnh.
Hãy đếm số lượng đỉnh trụ của đồ thị.

Đầu vào:
-Dòng đầu tiên là 2 số n, m, tương ứng với số lượng đỉnh, cạnh của đồ thị.
-Các đỉnh của đồ thị được đánh số từ 1 tới n. m dòng tiếp theo mỗi dòng chứa đỉnh u, v (u != v) tương ứng với một cạnh của đồ thị.
Đầu ra:
-In ra số lượng đỉnh trụ của đồ thị

Giới hạn
1=<=n<=1000
1<=m<=n*(n-1)/2

Ví dụ :
Input 01:
10 6
5 4
5 2
10 2
10 7
5 3
10 1
Output 01:
3
*/

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

vector<vector<int>> adjacencyList(2000);
bool visited[2000];
int n, m;

void DFS(int u) {
    visited[u] = true;
    for (int node : adjacencyList[u]) {
        if (!visited[node]) {
            DFS(node);
        }
    }
}

int countConnectedPart() {
    int cnt = 0;
    for (int i = 1; i <= n; i++) {
        if (!visited[i]) {
            cnt++;
            DFS(i);
        }
    }
    return cnt;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    cin >> n >> m;
    for (int i = 0; i < m; i++) {
        int node1, node2;
        cin >> node1 >> node2;
        adjacencyList[node1].push_back(node2);
        adjacencyList[node2].push_back(node1);
    }
    int cnt = 0;
    int connectedPartBefore = countConnectedPart();
    for (int i = 1; i <= n; i++) {
        memset(visited, false, sizeof(visited));
        visited[i] = true;
        if (countConnectedPart() > connectedPartBefore) {
            cnt++;
        }
    }
    cout << cnt;
    return 0;
}