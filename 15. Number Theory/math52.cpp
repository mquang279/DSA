#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const ll MOD = 1e9 + 7;

ll modInverse(ll a){
    ll res = 1;
    ll exp = MOD - 2;
    while (exp != 0){
        if (exp % 2 == 1) res = res * a % MOD;
        a = a * a % MOD;
        exp /= 2;
    }
    return res;
}

ll combination(int n, int k) {
    if (k > n) return 0;
    if (k == 0 || k == n) return 1;
    if (k > n - k) k = n - k; // C(n, k) == C(n, n-k)
    ll result = 1;
    for (int i = 0; i < k; ++i) {
        result = ((result % MOD) * (n - i) % MOD) % MOD;
        result = result % MOD * modInverse(i + 1) % MOD;
    }
    return result;
}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int n, k;
    cin >> n >> k;
    cout << combination(n, k);
    return 0;
}