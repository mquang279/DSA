/*
[DP]. Bài 6. Con ếch
Một con ếch có thể nhảy 1, 2, 3 bước để có thể lên đến một đỉnh cần đến.
Hãy đếm số các cách con ếch có thể nhảy đến đỉnh.

Đầu vào:
-Số nguyên dương N mô tả số bước con ếch cần di chuyển để nhảy tới đỉnh
Đầu ra:
-In ra kết quả của bài toán

Giới hạn
1<=N<=50

Ví dụ :
Input 01
5
Output 01
13
*/

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int n;
    cin >> n;
    int dp[n + 1] = {0};
    dp[0] = 1;
    for (int i = 1; i <= n; i++){
        if (i - 1 >= 0) dp[i] += dp[i - 1];
        if (i - 2 >= 0) dp[i] += dp[i - 2];
        if (i - 3 >= 0) dp[i] += dp[i - 3];
    }
    cout << dp[n];
    return 0;
}