#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const ll MOD = 1e9 + 7;

int dx[2] = {0, 1};
int dy[2] = {1, 0};
char a[2000][2000];
ll cnt[2000][2000];
int n, m;

void solve(){
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= m; j++){
            if (a[i][j] == '*'){
                cnt[i][j] = (cnt[i - 1][j] % MOD) + (cnt[i][j - 1] % MOD);
                cnt[i][j] %= MOD;
            }
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    cin >> n >> m;
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= m; j++){
            cin >> a[i][j];
        }
    }
    if (a[1][1] == 'x'){
        cout << 0;
        return 0;
    }
    cnt[1][1] = 1;
    a[1][1] = 'x';
    solve();
    cout << cnt[n][m];
    return 0;
}