/*
[Cây Nhị Phân]. Bài 7. Kiểm tra node lá cùng mức
Cho một cây nhị phân, nhiệm vụ của bạn là kiểm tra xem mọi node lá của cây có cùng mức hay không.

Đầu vào:
-Dòng đâu tiên là N : số lượng cạnh của cây.
-Các dòng tiếp theo mô tả cạnh của cây nhị phân bằng 3 số (x, y, z) : 
x là node cha, y là node con, z có thể nhận 1 trong 2 giá trị là L và R, 
tương ứng với y là node con bên trái hoặc node con bên phải của x.
Đầu ra:
-In YES nếu mọi node lá trên cây có cùng mức, ngược lại in NO.

Giới hạn:
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
int level = 0, currentLevel;
bool hasSameLevel = true;

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

void checkLevel(int i) {
    if (i >= MAX_NODES || a[i] == 0) return;
    currentLevel++;
    if (a[i * 2] == 0 && a[i * 2 + 1] == 0) {
        if (level != currentLevel) {
            if (level == 0) level = currentLevel;
            else {
                hasSameLevel = false;
            }
        }
    } else {
        checkLevel(i * 2);
        checkLevel(i * 2 + 1);
    }
    currentLevel--;
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
    checkLevel(1);
    if (hasSameLevel) cout << "YES";
    else cout << "NO";
    return 0;
}