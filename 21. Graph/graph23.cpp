/*
[Đồ thị]. Bài 23. Đồ thị liên thông mạnh
Cho đồ thị có hướng G = (V, E) được biểu diễn dưới dạng danh sách cạnh.
Hãy kiểm tra đồ thị có liên thông mạnh hay không? Bài này các bạn thử 
cài đặt bằng 3 cách là : brute force, thuật toán Tarjan, thuật toán Kosaraju.

Đầu vào:
-Dòng đầu tiên là 2 số n, m, tương ứng với số lượng đỉnh, cạnh của đồ thị.
-Các đỉnh của đồ thị được đánh số từ 1 tới n. m dòng tiếp theo mỗi dòng chứa 
đỉnh u, v (u != v) tương ứng với một cạnh của đồ thị.
Đầu ra:
-In ra 1 nếu đồ thị liên thông mạnh, ngược lại in ra 0.

Giới hạn
1<=n<=1000
1<=m<=n*(n-1)/2

Ví dụ :
Input 01:
6 14
3 4
3 1
2 5
2 6
4 6
2 3
5 6
1 5
1 2
3 5
4 5
6 3
4 2
1 4
Output 01:
1
*/

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

vector<vector<int>> adjacencyList(2000);
int countNode = 0;
bool visited[2000];
int n, m;

void dfs(int node) {
    visited[node] = true;
    countNode++;
    for (int adjNode : adjacencyList[node]) {
        if (!visited[adjNode]) {
            dfs(adjNode);
        }
    }
}

bool isStrongConnected(int start) {
    countNode = 0;
    dfs(start);
    return countNode == n;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    cin >> n >> m;
    for (int i = 0; i < m; i++) {
        int node1, node2;
        cin >> node1 >> node2;
        adjacencyList[node1].push_back(node2);
    }
    for (int i = 1; i <= n; i++) {
        memset(visited, false, sizeof(visited));
        if (!isStrongConnected(i)) {
            cout << 0;
            return 0;
        }
    }
    cout << 1;
    return 0;
}