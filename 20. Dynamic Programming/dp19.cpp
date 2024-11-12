/*
[DP]. Bài 19. Đếm số đường đi trong mê cung
-Cho mê cung được mô tả bởi một ma trận kí tự gồm N hàng và N cột. Mỗi ô trên ma trận 
chứa kí tự '.' tương ứng với đường đi và dấu * tương ứng với bẫy.
-Một con chuột muốn đi từ ô (1, 1) tới ô (N, N) và chỉ được di chuyển khi một ô nào đó 
là đường đi và nó được di chuyển sang phải hoặc xuống dưới.
-Hãy đếm số cách con chuột có thể di chuyển tới đích.
Vì kết quả quá lớn nên hãy lấy dư với 10^9 + 7

Đầu vào:
-Dòng đầu tiên là N
-N dòng tiếp theo mỗi dòng là N kí tự
Đầu ra:
-Số đường đi tối đa

Giới hạn
1<=N<=1000

Ví dụ :
Input 01:
4
....
.*..
...*
*...
Output 01:
3
*/

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const ll MOD = 1e9 + 7;

int dp[1005][1005];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int n;
    cin >> n;
    char a[n + 1][n + 1];
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= n; j++){
            cin >> a[i][j];
        }
    }
    if (a[1][1] == '.') dp[1][1] = 1;
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= n; j++){
            if (a[i][j] != '*'){
                if (a[i - 1][j] != '*') dp[i][j] += dp[i - 1][j];
                if (a[i][j - 1] != '*') dp[i][j] += dp[i][j - 1];
                dp[i][j] %= MOD;
            }
        }
    }
    cout << dp[n][n];
    return 0;
}
