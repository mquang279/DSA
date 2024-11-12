/*
[Đồ thị]. Bài 42. Lát đường
Ở 28techland có n thành phố và ban đầu không có đường giữa chúng. Tuy nhiên, 
mỗi ngày một con đường mới sẽ được xây dựng và sẽ có tổng cộng m con đường.
Một cụm thành phố là một nhóm các thành phố trong đó có một tuyến đường giữa 
hai thành phố bất kỳ bằng cách sử dụng các con đường.
Sau mỗi ngày, nhiệm vụ của bạn là tìm ra số lượng cụm thành phố và kích thước 
của cụm thành phố lớn nhất.

Đầu vào:
-Dòng đầu tiên có hai số nguyên n và m: số thành phố và đường. Các thành phố được đánh số 1,2,…, n.
-Sau đó, có m dòng mô tả các con đường mới. Mỗi dòng có hai số nguyên a và b: 
một con đường mới được xây dựng giữa các thành phố a và b.
-Bạn có thể cho rằng mọi con đường sẽ được xây dựng giữa hai thành phố khác nhau.
Đầu ra
-In m dòng: thông tin cần thiết sau mỗi ngày.

Giới hạn:
1≤n≤10^5
1≤m≤2⋅10^5
1≤a,b≤n

Ví dụ :
Input 01:
5 3
1 2
1 3
4 5
Output 01:
4 2
3 3
2 3
*/

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int parent[100001], citySize[100001];
int n, m;

void init() {
    for (int i = 1; i <= n; i++) {
        parent[i] = i;
        citySize[i] = 1;
    }
}

int find(int u) {
    while (u != parent[u]) {
        u = parent[u];
    }
    return u;
}

bool Union(int u, int v) {
    u = find(u);
    v = find(v);
    if (u == v) return false;
    else {
        if (u < v) {
            parent[v] = u;
            citySize[u] += citySize[v];
        }
        else {
            parent[u] = v;
            citySize[v] += citySize[u];
        }
        return true;
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    cin >> n >> m;
    init();
    int countPart = n, maxSize = 1;
    for (int i = 0; i < m; i++) {
        int node1, node2;
        cin >> node1 >> node2;
        if (Union(node1, node2)) {
            countPart--;
            maxSize = max(maxSize, citySize[find(node1)]);
        }
        cout << countPart << " " << maxSize << endl;
    }
    return 0;
}