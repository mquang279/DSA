#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const ll MOD = 1e9 + 7;

ll modInverse(ll a, ll m) {
    ll res = 1;
    ll exp = m - 2;
    while (exp > 0) {
        if (exp % 2 == 1) {
            res = res * a % m;
        }
        a = a * a % m;
        exp /= 2;
    }
    return res;
}

ll combination(int n, int k) {
    if (k > n) return 0;
    if (k == 0 || k == n) return 1;
    if (k > n - k) k = n - k; 
    ll result = 1;
    for (int i = 0; i < k; ++i) {
        result = result * (n - i) % MOD;
        result = result * modInverse(i + 1, MOD) % MOD;
    }
    return result;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int n, m;
    cin >> n >> m;
    n -= m;
    cout << combination(n + m - 1, m - 1);
    return 0;
}