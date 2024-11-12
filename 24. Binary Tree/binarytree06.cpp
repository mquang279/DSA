/*
[Cây Nhị Phân]. Bài 6. Cây nhị phân đầy đủ (full binary tree)
Cây nhị phân được gọi là đầy đủ nếu mọi node trung gian của nó đều có 2 con trái và phải. 
Nhiệm vụ của bạn là kiểm tra xem cây nhị phân đã cho có phải là cây nhị phân đầy đủ hay không, 
có in ra YES, ngược lại in ra NO.

Đầu vào:
-Dòng đâu tiên là N : số lượng cạnh của cây.
-Các dòng tiếp theo mô tả cạnh của cây nhị phân bằng 3 số (x, y, z) : 
x là node cha, y là node con, z có thể nhận 1 trong 2 giá trị là L và R, 
tương ứng với y là node con bên trái hoặc node con bên phải của x.
Đầu ra:
-In ra đáp án của bài toán

Giới hạn
1<=N<=1000
1<=x,y<=10^5

Ví dụ :
Input 01:
6
1 2 L 1 3 R 2 4 L 2 5 R 3 6 L 3 7 R
Output 01:
YES
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

int countChild(int i) {
    int res = 0;
    if (a[i * 2] != 0) res++;
    if (a[i * 2 + 1] != 0) res++;
    return res;
}

bool isBinaryTree(int i) {
    if (i >= MAX_NODES || a[i] == 0) return true;
    if (countChild(i) != 0 && countChild(i) != 2) return false;
    return isBinaryTree(i * 2) && isBinaryTree(i * 2 + 1);
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
    if (isBinaryTree(1)) cout << "YES";
    else cout << "NO";
    return 0;
}