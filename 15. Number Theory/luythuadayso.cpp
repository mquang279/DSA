#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const ll MOD = 1e9 + 7;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int n;
    cin >> n;
    ll res = 0;
    for (int i = 1; i <= n; i++){
        ll tmp = 1;
        for (int j = 1; j <= i; j++){
            tmp = ((tmp % MOD) * (i % MOD)) % MOD;
        }
        res = ((res % MOD) + (tmp % MOD)) % MOD;
    }
    cout << res;
    return 0;
}