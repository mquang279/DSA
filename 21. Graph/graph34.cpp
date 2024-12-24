/*
[Đồ thị]. Bài 34. Họp mặt
Có K người (1 ≤ K ≤ 100) đứng tại vị trí nào đó trong N địa điểm cho trước 
(1 ≤ N ≤ 1,000) được đánh số từ 1..N.
Các điểm được nối với nhau bởi M đoạn đường một chiều (1 ≤ M ≤ 10,000) 
(không có đoạn đường nào nối một điểm với chính nó).
Mọi người muốn cùng tụ họp tại một địa điểm nào đó.
Tuy nhiên, với các đường đi cho trước, chỉ có một số địa điểm nào đó có thể 
được chọn là điểm họp mặt.
Cho trước K, N, M và vị trí ban đầu của K người cùng với M đường đi một chiều, 
hãy xác định xem có bao nhiêu điểm có thể được chọn làm điểm họp mặt.

Đầu vào:
-Dòng 1: Ghi 3 số: K, N, và M
-Dòng 2 đến K+1 : dòng i+1 chứa một số nguyên trong khoảng (1..N) cho biết địa điểm 
mà người thứ i đang đứng.
-Dòng K+2 đến M+K+1: Mỗi dòng ghi một cặp số A và B mô tả một đoạn đường đi một chiều 
từ A đến B (cả hai trong khoảng 1..N và A != B).
Đầu ra:
-In ra số địa điểm có thể được chọn là điểm họp mặt.

Giới hạn
1 ≤ K ≤ 100
1 ≤ N ≤ 1,000
1 ≤ M ≤ 10,000

Ví dụ :
Input 01
4 10 15
1
4
5
7
10 3
5 6
4 9
5 3
8 6
4 6
8 9
3 9
1 9
6 9
7 9
9 6
7 3
2 9
5 9
Output 01
2
*/

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int k, n, m;
vector<int> adjList[1001];
int visitedCount[1001];
bool visited[1001];
int res;

void dfs(int start) {
    visitedCount[start]++;
    if (visitedCount[start] == k) res++;
    visited[start] = true;
    for (int adjNode : adjList[start]) {
        if (!visited[adjNode]) {
            dfs(adjNode);
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    
    cin >> k >> n >> m;
    int person[k];
    for (int i = 0; i < k; i++) {
        cin >> person[i];
    }
    for (int i = 0; i < m; i++) {
        int node1, node2;
        cin >> node1 >> node2;
        adjList[node1].push_back(node2);
    }
    for (int i = 0; i < k; i++) {
        memset(visited, false, sizeof(visited));
        dfs(person[i]);
    }
    cout << res;
    return 0;
}