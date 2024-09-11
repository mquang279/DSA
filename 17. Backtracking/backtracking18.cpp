/*
[Quay Lui - Nhánh Cận]. Bài 18. N Queen 3
Vẫn là bài toán N quân hậu, nhiệm vụ của bạn là hãy in ra các cách xếp quân hậu trên bàn cờ cỡ NxN . 
Trong đó với mỗi ô trên bàn cờ có quân hậu chiếm chỗ sẽ đại diện là chữ Q, ngược lại ô trống sẽ là dấu '.'.

Đầu vào
• Dòng duy nhất chứa N là kích cỡ bàn cờ
Đầu ra
• In ra các cách xếp quân hậu, mỗi cách xếp cách nhau một dòng trống

Giới hạn
• 1<=N<=10

Input 01
4
Output 01
.Q..
...Q
Q...
..Q.

..Q.
Q...
...Q
.Q..
*/

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int n;
int col[20], mainDiagonal[20], secondDiagonal[20];
vector<pair<int, int>> queenPosition;
char a[15][15];

void init(){
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            a[i][j] = '.';
        }
    }
}

void Try(int i){
    if (i == n){
        init();
        for (pair<int, int> p : queenPosition){
            a[p.first][p.second] = 'Q';
        }
        for (int j = 0; j < n; j++){
            for (int k = 0; k < n; k++){
                cout << a[j][k];
            }
            cout << endl;
        }
        cout << endl;
    }
    for (int j = 0; j < n; j++){
        if (col[j] == 0 && mainDiagonal[i + j - 1] == 0 && secondDiagonal[i - j + n] == 0){
            col[j] = mainDiagonal[i + j - 1] = secondDiagonal[i - j + n] = 1;
            queenPosition.push_back({i, j});
            Try(i + 1);
            col[j] = mainDiagonal[i + j - 1] = secondDiagonal[i - j + n] = 0;
            queenPosition.pop_back();
        }
    }
} 

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    cin >> n;
    Try(0);
    return 0;
}