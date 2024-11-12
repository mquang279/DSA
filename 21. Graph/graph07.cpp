/*
[Đồ thị]. Bài 7. Danh sách cạnh sang ma trận kề (vô hướng).
Cho đồ thị vô hướng G = <V, E> được biểu diễn dưới dạng danh sách cạnh.
Hãy chuyển đổi đồ thị dưới dạng danh sách cạnh này sang ma trận kề tương ứng.

Đầu vào:
-Dòng đầu tiên là 2 số n và m, tương ứng với số lượng đỉnh và cạnh của đồ thị. 
-Các đỉnh của đồ thị được đánh số từ 1 tới n.
-m dòng tiếp theo mỗi dòng chứa đỉnh u, v tương ứng với một cạnh của đồ thị.
Đầu ra:
-In ra ma trận kề theo mẫu.

Giới hạn:
1<=n<=1000
1<=m<=n*(n-1)/2

Ví dụ :
Input 01
5 4
4 3
3 1
4 2
5 4
Output 01
0 0 1 0 0 
0 0 0 1 0 
1 0 0 1 0 
0 1 1 0 1 
0 0 0 1 0
*/

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int a[1005][1005];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int nodes, edges;
    cin >> nodes >> edges;
    for (int i = 0; i < edges; i++){
        int x, y;
        cin >> x >> y;
        a[x][y] = 1;
        a[y][x] = 1;
    }
    for (int i = 1; i <= nodes; i++){
        for (int j = 1; j <= nodes; j++){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}