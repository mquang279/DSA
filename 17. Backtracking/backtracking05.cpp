/*
[Quay Lui - Nhánh Cận]. Bài 5. Di chuyển trong ma trận
Cho ma trận A[] gồm N hàng và M cột. Nhiệm vụ của bạn là đếm tất cả các đường đi từ 
phần tử A[1][1] đến phần tử A[N][M]. Bạn chỉ được phép dịch chuyển xuống dưới hoặc 
sang phải phần tử liền kề với vị trí hiện tại.

Đầu vào:
-Dòng 1 là hai số N và M
-Dòng tiếp theo đưa vào các phần tử của ma trận A[][]
Đầu ra:
-Đưa ra số cách di chuyển

Giới hạn:
1≤M, N,<=10
A[i][j]≤10000

Input 01:
3 5
4 6 8 3 1 
9 8 8 9 1 
10 6 3 4 5
Output 01:
15
*/

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int n, m, cnt;
int a[11][11];

bool check(int i, int j){
    return i >= 0 && j >= 0 && i < n && j < m;
}

void Try(int i, int j){
    a[i][j] = 0;
    if (i == n - 1 && j == m - 1) cnt++;
    if (check(i + 1, j)){
        Try(i + 1, j);
    }
    if (check(i, j + 1)){
        Try(i, j + 1);
    }
    a[i][j] = 1;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    cin >> n >> m;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cin >> a[i][j];
        }
    }
    Try(0, 0);
    cout << cnt;
    return 0;
}