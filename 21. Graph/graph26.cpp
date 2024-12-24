/*
[Đồ thị]. Bài 26. Xây dựng đường đi
Ở 28techland có n thành phố và m đường giữa chúng.
Mục tiêu là xây dựng những con đường mới để có một 
tuyến đường giữa hai thành phố bất kỳ.
Nhiệm vụ của bạn là tìm ra số lượng đường tối thiểu cần thiết, 
đồng thời xác định những con đường nào nên được xây dựng.

Đầu vào:
-Dòng đầu tiên có hai số nguyên n và m: số thành phố và đường. 
-Các thành phố được đánh số từ 1 tới n.
-Sau đó, có m dòng mô tả các con đường. Mỗi dòng có hai số nguyên a và b : 
có một con đường giữa các thành phố đó, các con đường này là đường 2 chiều.
-Một con đường luôn nối hai thành phố khác nhau và có nhiều nhất một con 
đường giữa hai thành phố bất kỳ.

Đầu ra:
-Dòng đầu tiên in ra K là số con đường cần xây dựng.
-K dòng tiếp theo in ra các con đường được xây dựng, 
do có nhiều cách xây dựng đường nên bạn sẽ lựa chọn ra các con đường 
có thứ tự từ điển nhỏ nhất để xây dựng nhưng với một điều kiện đó là, 
mỗi thành phố được lựa chọn là điểm xuất phát của con đường không quá 1 lần.

Giới hạn
1<=n<=1000
0<=m<=n*(n-1)/2
1<=a,b<=n

Ví dụ :
Input 01
Copy
6 3
4 3
4 1
4 2
Output 01
Copy
2
1 5
5 6
*/

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

vector<int> adjList[100001];
bool visited[100001];

void dfs(int u) {
    visited[u] = true;
    for (int adjNode : adjList[u]) {
        if (!visited[adjNode]) {
            dfs(adjNode);
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
        adjList[node1].push_back(node2);
        adjList[node2].push_back(node1);
    }
    vector<int> v;
    for (int i = 1; i <= n; i++) {
        if (!visited[i]) {
            v.push_back(i);
            dfs(i);
        }
    }
    cout << v.size() - 1 << endl;
    for (int i = 0; i < v.size() - 1; i++) {
        cout << v[i] << " " << v[i + 1] << endl;
    }
    return 0;
}