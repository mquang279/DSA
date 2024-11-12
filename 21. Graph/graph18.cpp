/*
[Đồ thị]. Bài 18. Kiểm tra đường đi
Cho đồ thị vô hướng G = (V, E) được biểu diễn dưới dạng danh sách cạnh.
Có Q truy vấn, mỗi truy vấn yêu cầu trả lời câu hỏi giữa 2 đỉnh s và t 
có tồn tại đường đi tới nhau hay không ?

Đầu vào:
-Dòng đầu tiên là 2 số n, m, tương ứng với số lượng đỉnh, cạnh của đồ thị.
-Các đỉnh của đồ thị được đánh số từ 1 tới n. m dòng tiếp theo mỗi dòng chứa 
đỉnh u, v (u != v) tương ứng với một cạnh của đồ thị.
Đầu ra:
-Đối với mỗi truy vấn in ra 1 nếu có đường đi giữa s và t, ngược lại in ra -1.

Giới hạn
1<=s,t<=n<=1000
1<=m<=n*(n-1)/2
1<=Q<=10000

Ví dụ :
Input 01:
5 3
5 4
4 1
4 3
3
4 5
4 2
3 4
Output 01:
1
-1
1
*/

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

vector<vector<int>> adjacencyList(500000);
bool visited[500000];
int strongConnectedPart[1000];
int cnt;

void DFS(int u) {
    visited[u] = true;
    strongConnectedPart[u] = cnt;
    for (int node : adjacencyList[u]) {
        if (!visited[node]) {
            DFS(node);
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
        adjacencyList[node1].push_back(node2);
        adjacencyList[node2].push_back(node1);
    }
    for (int i = 1; i <= n; i++) {
        if (!visited[i]) {
            cnt++;
            DFS(i);
        }
    }
    int q;
    cin >> q;
    while (q--) {
        int node1, node2;
        cin >> node1 >> node2;
        if (strongConnectedPart[node1] == strongConnectedPart[node2]) {
            cout << 1 << endl; 
        } else cout << -1 << endl;
    }
    return 0;
}