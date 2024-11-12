/*
[DP Basic]. Bài 8. Squirrel 2
Có N nhóm hạt ngũ cốc được đánh số từ 1 tới N mỗi nhóm sẽ có lượng hạt ngũ cốc là A[i] với 1<=i<=N, 
một con sóc đang ở vị trí nhóm hạt số 1. Nhiệm vụ của nó là tới được nhóm hạt thứ N, chi phí mỗi lần 
di chuyển từ nhóm hạt x sang nhóm hạt y là abs(A[x] - A[y]), mỗi lần di chuyển con sóc chỉ có thể di 
chuyển từ nhóm hạt i sang nhóm hạt i + 1 hoặc i + 2,... i + K.
Nhiệm vụ của bạn là tính số lượng ngũ cốc tối thiểu mà con sóc này phải tiêu tốn để có thể đi đến nhóm hạt thứ N

Đầu vào:
-Dòng 1 là 2 số N, K
-Dòng 2 là N số là số hạt ngũ cốc của mỗi nhóm từ 1 tới N
Đầu ra:
-In ra số lượng ngũ cốc mà sóc đã mất làm chi phí di chuyển

Giới hạn
1<=N<=10^6
1<=K<=100
1<=A[i]<=10^9

Input 01:
5 3
5 1 1 4 7
Output 01:
4
*/

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int n, k;
    cin >> n >> k;
    int a[n];
    for (int &x : a) cin >> x;
    ll dp[n];
    dp[0] = 0;
    for (int i = 1; i < n; i++){
        dp[i] = LLONG_MAX;
        for (int j = 1; j <= k; j++){
            if (i - j < 0) break;
            dp[i] = min(dp[i - j] + abs(a[i - j] - a[i]), dp[i]);
        }
    }
    cout << dp[n - 1];
    return 0;
}