/*
[Cây Nhị Phân]. Bài 8. Duyệt theo mức
Cho cây nhị phân, nhiệm vụ của bạn là duyệt cây theo mức

Đầu vào:
-Dòng đâu tiên là N : số lượng cạnh của cây.
-Các dòng tiếp theo mô tả cạnh của cây nhị phân bằng 3 số (x, y, z) : 
x là node cha, y là node con, z có thể nhận 1 trong 2 giá trị là L và R, 
tương ứng với y là node con bên trái hoặc node con bên phải của x.
Đầu ra:
-In ra thứ tự duyệt theo mức

Giới hạn:
1<=N<=1000
1<=x,y<=10^5

Ví dụ :
Input 01:
6
1 2 L 1 3 R 2 4 L 2 5 R 3 6 L 3 7 R
Output 01:
1 2 3 4 5 6 7
*/


#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const int MAX_NODES = 5000;
int a[MAX_NODES];

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

void traversalByLevel(int i) {
    queue<int> q;
    q.push(a[i]);
    while (!q.empty()) {
        int u = q.front();
        cout << a[u] << " ";
        q.pop();
        if (a[u * 2] != 0) {
            q.push(u * 2);
        }
        if (a[u * 2 + 1] != 0) {
            q.push(u * 2 + 1);
        }
    }
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
    traversalByLevel(1);
    return 0;
}