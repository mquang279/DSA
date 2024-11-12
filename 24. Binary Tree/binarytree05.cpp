/*
[Cây Nhị Phân]. Bài 5. Độ cao của cây
Cho cây nhị phân, nhiệm vụ của bạn là tìm độ cao lớn nhất của 1 node lá trên cây.

Đầu vào
-Dòng đâu tiên là N : số lượng cạnh của cây.
-Các dòng tiếp theo mô tả cạnh của cây nhị phân bằng 3 số (x, y, z) : 
x là node cha, y là node con, z có thể nhận 1 trong 2 giá trị là L và R, 
tương ứng với y là node con bên trái hoặc node con bên phải của x.
Đầu ra:
-In ra độ cao của cây

Giới hạn:
1<=N<=1000
1<=x,y<=10^5

Ví dụ :
Input 01:
6
1 2 L 1 3 R 2 4 L 2 5 R 3 6 L 3 7 R
Output 01:
2
*/

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const int MAX_NODES = 5000;
int a[MAX_NODES];
ll maxDepth, currentDepth;

void addNode(int i, int parent, int child, char position) {
    if (a[i] == 0) return;
    if (a[i] == parent) {
        if (position == 'L') {
            a[i * 2] = child;
        } else {
            a[i * 2 + 1] = child;
        }
    } else {
        addNode(i * 2, parent, child, position);
        addNode(i * 2 + 1, parent, child, position);
    }
}

void dfs(int i) {
    if (i > MAX_NODES || a[i] == 0) return;
    currentDepth++;
    if (a[i * 2] == 0 && a[i * 2 + 1] == 0) {
        maxDepth = max(maxDepth, currentDepth);
    }
    else {
        dfs(i * 2);
        dfs(i * 2 + 1);
    }
    currentDepth--;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int n;
    cin >> n;
    a[1] = 1;
    for (int i = 0; i < n; i++) {
        int parent, child;
        char position;
        cin >> parent >> child >> position;
        addNode(1, parent, child, position);
    }
    dfs(1);
    cout << maxDepth - 1;
    return 0;
}