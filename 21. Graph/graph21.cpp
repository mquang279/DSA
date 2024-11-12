/*
[Đồ thị]. Bài 21. Kiểm tra chu trình trên đồ thị vô hướng
Cho đồ thị vô hướng G = (V, E) được biểu diễn dưới dạng danh sách cạnh.
Hãy xác định xem đồ thị có tồn tại chu trình hay không? Bài này các bạn 
cài đặt bằng 3 phương pháp : DFS, BFS và DSU.

Đầu vào:
-Dòng đầu tiên là 2 số n, m, tương ứng với số lượng đỉnh, cạnh của đồ thị.
-Các đỉnh của đồ thị được đánh số từ 1 tới n. m dòng tiếp theo mỗi dòng chứa 
đỉnh u, v (u != v) tương ứng với một cạnh của đồ thị.
Đầu ra:
-In ra 1 nếu đồ thị tồn tại chu trình, ngược lại in ra 0.

Giới hạn
1<=n<=1000
1<=m<=n*(n-1)/2

Ví dụ :
Input 01:
10 11
10 5
10 4
10 1
10 3
5 2
5 4
10 8
5 3
5 1
10 6
10 9
Output 01:
1
*/

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

vector<set<int>> adjacencyList(2000);
bool visited[2000];
bool hasCycle;

void dfs(int u, int parent) {
    visited[u] = true;
    for (int node : adjacencyList[u]) {
        if (!visited[node]) {
            dfs(node, u);
        } else if (node != parent) {
            hasCycle = true;
        }
    }
}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < m; i++) {
        int node1, node2;
        cin >> node1 >> node2;
        adjacencyList[node1].insert(node2);
        adjacencyList[node2].insert(node1);
    }
    for (int i = 1; i <= n; i++) {
        if (!visited[i]) {
            dfs(i, i);
        }
        if (hasCycle) {
            cout << 1;
            return 0;
        }
    }
    cout << 0;
    return 0;
}