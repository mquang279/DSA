/*
[Quay Lui - Nhánh Cận]. Bài 2. Rat in maze 1
Cho một mê cung được mô tả dưới dạng một ma trận nhị phân có N hàng và N cột. Một con chuột bắt đầu 
từ ô (1, 1) và muốn di chuyển tới ô (N, N). Con chuột chỉ được di chuyển xuống dưới hoặc sang phải 
và chỉ được di chuyển tới ô nào đó nếu ô đó có giá trị là 1. Bạn hãy in ra các cách đi hợp lệ của 
con chuột, trong đó nếu con chuột đi sang phải thì nước đi được mô tả là chữ R, và nếu con chuột đi 
xuống dưới thì nước đi được mô tả là chữ D. Nếu con chuột không thể đi xuống ô (N, N) thì in ra -1. 
Chú ý trên mỗi đường đi con chuột chỉ có thể đi qua 1 ô nào đó đúng 1 lần.

Đầu vào:
-Dòng thứ nhất đưa vào N
-N dòng tiếp theo mỗi dòng gồm N số
Đầu ra:
-Đưa ra các đường đi hợp lệ theo thứ tự từ điển tăng dần trên từng dòng.

Giới hạn:
1<=N<=12
Dữ liệu đảm bảo ô (1, 1) là số 1.

Input 01:
4
1 1 0 1 
1 1 1 1 
1 0 1 1 
1 1 1 1
Output 01:
DDDRRR
DRRDDR
DRRDRD
DRRRDD
RDRDDR
RDRDRD
RDRRDD
*/

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int n;
int a[15][15];
string path = "";

bool check(int i, int j){
    return i >= 0 && j >= 0 && i < n && j < n && a[i][j] == 1;
}

void Try(int i, int j){
    if (i == n - 1 && j == n - 1){
        cout << path << endl;
    }
    if (check(i + 1, j)){
        path += 'D';
        a[i + 1][j] = 0;
        Try(i + 1, j);
        path.pop_back();
        a[i + 1][j] = 1;
    }
    if (check(i, j + 1)){
        path += 'R';
        a[i][j + 1] = 0;
        Try(i, j + 1);
        path.pop_back();
        a[i][j + 1] = 1;
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    cin >> n;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cin >> a[i][j];
        }
    }
    Try(0, 0);
    return 0;
}