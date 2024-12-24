/*
[Đồ thị]. Bài 24. Kiểm tra cây
Một đồ thị n đỉnh là một cây, nếu như nó có đúng n -1 cạnh 
và giữa 2 đỉnh bất kì, chỉ tồn tại duy nhất 1 đường đi giữa chúng.

Cho một đồ thị vô hướng n đỉnh và m cạnh, hãy kiểm tra đồ thị đã 
cho có phải là một cây hay không?

Đầu vào:
- Dòng đầu tiên là 2 số n, m, tương ứng với số lượng đỉnh, cạnh của đồ thị.
- Các đỉnh của đồ thị được đánh số từ 1 tới n. m dòng tiếp theo mỗi dòng 
chứa đỉnh u, v (u != v) tương ứng với một cạnh của đồ thị.
Đầu ra:
- In ra 1 nếu đồ thị đã cho là cây, ngược lại in ra 0.

Giới hạn:
1<=n<=1000
1<=m<=n*(n-1)/2

Ví dụ :
Input 01
6 5
4 3
2 1
6 5
5 4
3 2
Output 01
1
*/

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

vector<int> adjList[2000];
int cnt;
bool visited[2000];

void dfs(int u) {
    cnt++;
    visited[u] = true;
    for (int adjNode : adjList[u]) {
        if (!visited[adjNode]) {
            dfs(adjNode);
        }
    }
}

bool isTree(int n, int m) {
    if (n - 1 != m) return false;
    dfs(1);
    return cnt == n;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < m; i++) {
        int node1, node2;
        cin >> node1 >> node2;
        adjList[node1].push_back(node2);
        adjList[node2].push_back(node1);
    }
    if (isTree(n, m)) cout << "1";
    else cout << "0";
    return 0;
}