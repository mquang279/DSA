/*
[Đồ thị]. Bài 3. Danh sách cạnh sang danh sách kề (có hướng)
Cho đồ thị có hướng G = <V, E> gồm n đỉnh và m cạnh được biểu diễn dưới dạng danh sách cạnh.
Hãy chuyển đổi đồ thị dưới dạng danh sách cạnh này sang danh sách kề tương ứng.

Đầu vào:
-Dòng đầu tiên là 2 số n và m. Các đỉnh của đồ thị được đánh số từ 1 tới n.
-m dòng tiếp theo mỗi dòng chứa đỉnh u, v (u != v) tương ứng với một cạnh của đồ thị.
Đầu ra:
-In ra n dòng, trong đó dòng thứ i in ra danh sách kề của đỉnh i.
-Các đỉnh trong danh sách kề được liệt kê từ nhỏ tới lớn.

Giới hạn
1<=n<=1000
1<=m<=n*(n-1)/2

Ví dụ :
Input 01
5 10
4 2
4 1
2 5
3 4
1 5
2 3
5 1
2 1
1 4
4 5
Output 01
1 : 4 5 
2 : 1 3 5 
3 : 4 
4 : 1 2 5 
5 : 1
*/

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int n, m;
    cin >> n >> m;
    vector<vector<int>> v(n + 1);
    for (int i = 0; i < m; i++){
        int node1, node2;
        cin >> node1 >> node2;
        v[node1].push_back(node2);
    }
    for (int i = 1; i <= n; i++) {
        sort(v[i].begin(), v[i].end());
        cout << i << " : ";
        for (int x : v[i]){
            cout << x << " ";
        }
        cout << endl;
    }
    return 0;
}