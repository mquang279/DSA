/*
[Đồ thị]. Bài 22. Kiểm tra chu trình trên đồ thị có hướng
Cho đồ thị có hướng G = (V, E) được biểu diễn dưới dạng danh sách cạnh.
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
4 4
1 2
2 3
3 1
1 4
Output 01:
1
*/

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

vector<vector<int>> adjacencyList(500000);
int status[500000];
//0 : not visited
//1 : visiting
//2 : visited
bool hasCycle;

void dfs(int node, int parent) {
    status[node] = 1;
    for (int adjNode : adjacencyList[node]) {
        if (status[adjNode] == 0) {
            dfs(adjNode, node);
        } else if (status[adjNode] == 1 && adjNode != parent) {
            hasCycle = true;
        }
    }
    status[node] = 2;
}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < m; i++) {
        int node1, node2;
        cin >> node1 >> node2;
        adjacencyList[node1].push_back(node2);
    }
    for (int i = 1; i <= n; i++) {
        if (status[i] == 0) {
            dfs(i, -1);
        }
        if (hasCycle) {
            cout << 1;
            return 0;
        }
    }
    cout << 0;
    return 0;
}