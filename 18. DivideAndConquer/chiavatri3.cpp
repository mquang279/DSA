#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const ll MOD = 1e9 + 7;

ll powMod(ll n, ll k) {
    ll res = 1;
    ll exp = n;
    while (k != 0) {
        if (k % 2 == 1) res = ((res % MOD) * (exp % MOD)) % MOD;
        exp = ((exp % MOD) * (exp % MOD)) % MOD;
        k /= 2;
    }
    return res;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    ll n;
    cin >> n; 
    cout << powMod(2, n - 1);
    return 0;
}