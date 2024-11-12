/*
[Cây Nhị Phân]. Bài 1. Duyệt Inorder
Cho cây nhị phân có N cạnh, nhiệm vụ của bạn là duyệt cây theo thứ tự Inorder.

Đầu vào:
-Dòng đâu tiên là N : số lượng cạnh của cây.
-Các dòng tiếp theo mô tả cạnh của cây nhị phân bằng 3 số (x, y, z) : 
x là node cha, y là node con, z có thể nhận 1 trong 2 giá trị là L và R, 
tương ứng với y là node con bên trái hoặc node con bên phải của x.
Đầu ra:
-In ra thứ tự duyệt cây Inorder

Giới hạn
1<=N<=1000
1<=x,y<=10^5

Ví dụ :
Input 01:
6
1 2 L 1 3 R 2 4 L 2 5 R 3 6 L 3 7 R
Output 01:
4 2 5 1 6 3 7
*/

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int a[2000];

void addNode(int i, int parent, int child, int position) {
    if (a[i] == NULL) return;
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

void inorder(int i) {
    if (a[i] != NULL) {
        inorder(i * 2);
        cout << a[i] << " ";
        inorder(i * 2 + 1);
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
    inorder(1);
    return 0;
}