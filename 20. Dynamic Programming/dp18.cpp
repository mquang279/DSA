#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int dp[505][505];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int n, m;
    cin >> n >> m;
    int a[n + 1][m + 1];
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= m; j++){
            cin >> a[i][j];
        }
    }
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= m; j++){
            dp[i][j] = max({dp[i - 1][j], dp[i - 1][j - 1], dp[i][j - 1]}) + a[i][j];
        }
    }
    cout << dp[n][m];
    return 0;
}