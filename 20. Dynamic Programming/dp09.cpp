/*
[DP]. Bài 9. Số nguyên lớn
Cho hai số nguyên lớn N và M có không quá 1000 chữ số.
Người ta muốn tính xem liệu có thể lấy ra nhiều nhất bao nhiêu 
chữ số trong N (không cần liên tiếp) và giữ nguyên thứ tự của nó 
để tạo ra một số X sao cho ta cũng có thể tìm thấy X trong số M 
theo cách tương tự.

Đầu vào:
-Dòng thứ nhất ghi số N, dòng thứ 2 ghi số M
Đầu ra:
-In ra số chữ số nhiều nhất có thể của X

Giới hạn:
1<=len(N), len(M) <= 1000

Ví dụ :
Input 01:
82619136359
5572555993152891122
Output 01:
5
*/

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int dp[2000][2000];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    string m, n;
    cin >> m >> n;
    for (int i = 0; i < m.length(); i++){
        for (int j = 0; j < n.length(); j++){
            if (m[i] == n[j]){
                dp[i + 1][j + 1] = dp[i][j] + 1;
            }
            else dp[i + 1][j + 1] = max(dp[i][j + 1], dp[i + 1][j]);
        }
    }
    cout << dp[m.length()][n.length()];
    return 0;
}