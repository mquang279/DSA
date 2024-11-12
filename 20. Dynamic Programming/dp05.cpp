/*
[DP]. Bài 5. Cầu thang
Một chiếc cầu thang có N bậc. Mỗi bước, bạn được phép bước lên trên tối đa K bước.
Hỏi có tất cả bao nhiêu cách bước để đi hết cầu thang sao cho tổng số bước đi bằng N

Đầu vào:
-Dòng duy nhất chứa 2 số nguyên N và K
Đầu ra:
-In ra đáp án sau khi chia dư với 10^9+7.

Giới hạn
1<=N<=100000
1<=K<=1000

Ví dụ :
Input 01:
4 2
Output 01:
5
*/

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const ll MOD = 1e9 + 7;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int n, k;
    cin >> n >> k;
    int dp[n + 1] = {0};
    dp[0] = 1;
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= k; j++){
            if (i - j < 0) break;
            dp[i] += dp[i - j];
            dp[i] %= MOD;
        }
    }
    cout << dp[n];
    return 0;
}