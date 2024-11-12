/*
[Đồ thị]. Bài 14. Đường đi trên đồ thị vô hướng bằng DFS
Cho đồ thị vô hướng G = (V, E) được biểu diễn dưới dạng danh sách cạnh.
Hãy tìm đường đi theo thuật toán DFS từ đỉnh s tới đỉnh t.
Trong qúa trình mở rộng của thuật toán DFS, luôn ưu tiên mở rộng đỉnh có 
số thứ tự nhỏ hơn. Nếu không tồn tại đường đi thì in ra -1.

Đầu vào:
-Dòng đầu tiên là 4 số n, m, s, t, tương ứng với số lượng đỉnh, cạnh của đồ thị, 
đỉnh bắt đầu và đỉnh kết thúc.
-Các đỉnh của đồ thị được đánh số từ 1 tới n. m dòng tiếp theo mỗi dòng chứa 
đỉnh u, v (u != v) tương ứng với một cạnh của đồ thị.
Đầu ra:
-In ra đường đi từ s tới t nếu có đường đi, trường hợp không tồn tại đường đi thì in ra -1.

Giới hạn
1<=s,t<=n<=1000
1<=m<=n*(n-1)/2

Ví dụ :
Input 01:
5 3 4 3
4 2
2 1
3 1
Output 01:
4 2 1 3
*/

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

vector<set<int>> adjacencyList(5000);
bool visited[5000];
bool hasPath;
int n, m, s, t;
vector<int> path;

void dfs(int s) {
    visited[s] = true;
    if (s == t) {
        for (int node : path) cout << node << " ";
        hasPath = true;
        return;
    }
    for (int adjNode : adjacencyList[s]) {
        if (!visited[adjNode]) {
            path.push_back(adjNode);
            dfs(adjNode);
            path.pop_back();
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    cin >> n >> m >> s >> t;
    for (int i = 0; i < m; i++) {
        int node1, node2;
        cin >> node1 >> node2;
        adjacencyList[node1].insert(node2);
        adjacencyList[node2].insert(node1);
    }
    path.push_back(s);
    dfs(s);
    if (!hasPath) cout << -1;
    return 0;
}