#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int n;
    cin >> n;
    int tmp = sqrt(n);
    if (tmp * tmp == n){
        cout << 1;
        return 0;
    }
    int dp[n + 1];
    dp[0] = 1;
    dp[1] = 1;
    for (int i = 2; i <= n; i++) {
        dp[i] = 1e9;
    }
    for (int i = 2; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            dp[i] = min(dp[i], dp[j] + dp[i - j]);
        }
    }
    cout << dp[n];
    return 0;
}