/*
[Đồ thị]. Bài 6. Ma trận kề sang danh sách kề, danh sách cạnh (có hướng).
Cho ma trận kề A[][] của đồ thị có hướng G = (V, E) chỉ bao gồm các số 0 hoặc 1.
Hãy chuyển đổi đồ thị này thành danh sách cạnh và danh sách kề tương ứng.

Đầu vào:
-Dòng đầu tiên là n tương ứng với số lượng đỉnh của đồ thị.
-n dòng tiếp theo mỗi dòng gồm n số mô tả ma trận A.
Đầu ra:
-Những dòng đầu tiên liệt kê danh sách cạnh theo thứ tự từ điển tăng dần.
-Sau đó cách ra 1 dòng và liệt kê danh sách kề, trong đó các đỉnh trong danh sách 
kề được in ra theo thứ tự tăng dần. Xem output mẫu để rõ hơn.

Giới hạn
1<=n<=1000

Ví dụ :
Input 01:
5
0 0 0 1 0 
1 0 1 1 1 
1 0 0 1 1 
1 0 0 0 0 
0 1 0 1 0
Output 01:
1 4
2 1
2 3
2 4
2 5
3 1
3 4
3 5
4 1
5 2
5 4

1 : 4 
2 : 1 3 4 5 
3 : 1 4 5 
4 : 1 
5 : 2 4
*/

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int n;
    cin >> n;
    int a[n + 1][n + 1];
    vector<pair<int, int>> edgeList;
    vector<vector<int>> adjacencyList(n + 1);
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= n; j++){
            cin >> a[i][j];
            if (a[i][j] == 1){
                edgeList.push_back({i, j});
                adjacencyList[i].push_back(j);
            }
        }
    }
    for (auto it : edgeList){
        cout << it.first << " " << it.second << endl;
    }
    cout << endl;
    for (int i = 1; i <= n; i++){
        cout << i << " : ";
        for (int node : adjacencyList[i]) cout << node << " ";
        cout << endl;
    }
    return 0;
}