/*
[Đồ thị]. Bài 10. DFS trên đồ thị có hướng
Cho đồ thị có hướng G = (V, E) được biểu diễn dưới dạng danh sách cạnh.
Hãy thực hiện in ra danh sách các đỉnh được duyệt theo thuật toán DFS(s).
Chú ý trong quá trình mở rộng các đỉnh của thuật toán DFS luôn lựa chọn 
duyệt các đỉnh có thứ tự nhỏ hơn trước.

Đầu vào:
-Dòng đầu tiên là 2 số n và m và s, tương ứng với số lượng đỉnh, cạnh của đồ thị và đỉnh bắt đầu duyệt.
-Các đỉnh của đồ thị được đánh số từ 1 tới n. m dòng tiếp theo mỗi dòng chứa 
đỉnh u, v (u != v) tương ứng với một cạnh của đồ thị.
Đầu ra:
-In ra các đỉnh được duyệt theo thuật toán DFS(s).

Giới hạn
1<=s<=n<=1000
1<=m<=n*(n-1)/2

Ví dụ :
Input 01:
5 10 4
5 1
4 5
4 2
4 3
1 5
3 5
5 3
3 1
1 4
5 2
Output 01:
4 2 3 1 5
*/

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

vector<vector<int>> adjacencyList(500000);
bool visited[500000];

void DFS(int u) {
    visited[u] = true;
    cout << u << " ";
    for (int node : adjacencyList[u]) {
        if (!visited[node]) {
            DFS(node);
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int n, m, s;
    cin >> n >> m >> s;
    for (int i = 0; i < m; i++) {
        int node1, node2;
        cin >> node1 >> node2;
        adjacencyList[node1].push_back(node2);
    }
    for (int i = 1; i <= n; i++) {
        sort(adjacencyList[i].begin(), adjacencyList[i].end());
    }
    DFS(s);
    return 0;
}