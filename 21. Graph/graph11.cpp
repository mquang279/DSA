/*
[Đồ thị]. Bài 11. BFS trên đồ thị vô hướng.
Cho đồ thị vô hướng G = (V, E) được biểu diễn dưới dạng danh sách cạnh.
Hãy thực hiện in ra danh sách các đỉnh được duyệt theo thuật toán BFS(s).
Trong quá trình mở rộng của thuật toán BFS luôn ưu tiên mở rộng đỉnh có 
số thứ tự nhỏ hơn trước.

Đầu vào:
-Dòng đầu tiên là 2 số n và m và s, tương ứng với số lượng đỉnh, 
cạnh của đồ thị và đỉnh bắt đầu duyệt.
-Các đỉnh của đồ thị được đánh số từ 1 tới n. m dòng tiếp theo mỗi 
dòng chứa đỉnh u, v (u != v) tương ứng với một cạnh của đồ thị.
Đầu ra:
-In ra các đỉnh được duyệt theo thuật toán BFS(s).

Giới hạn
1<=s<=n<=1000
1<=m<=n*(n-1)/2
Chú ý trong quá trình mở rộng các đỉnh của thuật toán BFS luôn lựa chọn duyệt các đỉnh có thứ tự nhỏ hơn trước.

Ví dụ :
Input 01:
5 7 5
4 1
5 3
4 3
5 1
3 2
4 2
2 1
Output 01:
5 1 3 2 4
*/

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

vector<vector<int>> adjacencyList(1001);
bool visited[1001];

void BFS(int start){
    queue<int> q;
    q.push(start);
    visited[start] = true;
    cout << start << " ";
    while (!q.empty()){
        int v = q.front();
        q.pop();
        sort(adjacencyList[v].begin(), adjacencyList[v].end());
        for (int adjacencyNode : adjacencyList[v]){
            if (!visited[adjacencyNode]){
                q.push(adjacencyNode);
                visited[adjacencyNode] = true;
                cout << adjacencyNode << " ";
            }
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int n, m, s;
    cin >> n >> m >> s;
    for (int i = 0; i < m; i++){
        int node1, node2;
        cin >> node1 >> node2;
        adjacencyList[node1].push_back(node2);
        adjacencyList[node2].push_back(node1);
    }
    BFS(s);
    return 0;
}