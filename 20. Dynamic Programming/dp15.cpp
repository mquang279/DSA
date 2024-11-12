/*
[DP]. Bài 15. Coin problem
Ngân hàng XYZ hiện có N tờ tiền có mệnh giá khác nhau được lưu vào mảng C[], 
bạn hãy tìm cách đổi số tiền là S sao cho số tờ tiền cần dùng là ít nhất. 
Bạn được sử dụng một mệnh giá không giới hạn số lần.

Đầu vào:
-Dòng đầu tiên chứa 2 số N và S
-Dòng thứ 2 chưa N số là mệnh giá các tờ tiền
Đầu ra:
-In ra số tờ tiền nhỏ nhất cần đổi. Nếu không thể đổi được số tiền đúng bằng S thì in ra -1.

Giới hạn
1<=N<=100
1<=S<=10^6
1<=C[i]<=10^6

Ví dụ :
Input 01:
3 10
4 5 8
Output 01:
2
*/

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int n, s;
    cin >> n >> s;
    int a[n];
    for (int &x : a) cin >> x;
    int dp[s + 1];
    dp[0] = 0;
    for (int i = 1; i <= s; i++){
        dp[i] = 1e9;
        for (int j = 0; j < n; j++){
            if (i - a[j] >= 0) dp[i] = min(dp[i], dp[i - a[j]] + 1);
        }
    }
    if (dp[s] == 1e9) cout << -1;
    else cout << dp[s];
    return 0;
}
