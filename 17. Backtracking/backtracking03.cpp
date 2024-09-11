/*
[Quay Lui - Nhánh Cận]. Bài 3. Rat in maze 2
Cho một mê cung được mô tả dưới dạng một ma trận nhị phân có N hàng và N cột. Một con chuột bắt đầu tử ô 
(1, 1) và muốn di chuyển tới (N, N). Con chuột chỉ được di chuyển sang trái, sang phải, lên trên và xuống 
dưới và chỉ được di chuyển tới ô nào đó nếu ô đó có giá trị là 1. Bạn hãy in ra các cách đi hợp lệ của con 
chuột, trong đó nếu con chuột đi sang phải thì nước đi được mô tả là chữ R, và nếu con chuột đi xuống dưới 
thì nước đi được mô tả là chữ D, nếu đi sang trái thì nước đi được mô tả là chữ L, nếu đi lên trên thì nước 
đi được mô tả là chữ U. Nếu con chuột không thể đi xuống ô (N, N) thì in ra -1. Chú ý trên mỗi đường đi con 
chuột chỉ có thể đi qua 1 ô nào đó đúng 1 lần.

Đầu vào:
1 dòng gồm 3 số nguyên n, k, s
Đầu ra:
In ra đáp án của bài toán

Giới hạn:
1 ≤ n ≤ 20
1 ≤ k ≤ 10
1 ≤ s ≤ 155

Input 01:
16 8 91
Output 01:
28
*/

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int n;
int a[10][10];
string path = "";

int dx[4] = {1, 0, 0, -1};
int dy[4] = {0, -1, 1, 0};
map<int, string> mp;
bool isFinal = false;


bool check(int i, int j){
    return i >= 0 && j >= 0 && i < n && j < n && a[i][j] == 1;
}

void Try(int i, int j){
    a[i][j] = 0;
    if (i == n - 1 && j == n - 1){
        cout << path << endl;
        isFinal = true;
    }
    for (int k = 0; k < 4; k++){
        int newX = i + dx[k];
        int newY = j + dy[k];
        if (check(newX, newY)){
            path += mp[k];
            Try(newX, newY);
            path.pop_back();
        }
    }
    a[i][j] = 1;
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
    mp[0] = "D";
    mp[1] = "L";
    mp[2] = "R";
    mp[3] = "U";
    Try(0, 0);
    if (!isFinal) cout << -1 << endl;
    return 0;
}