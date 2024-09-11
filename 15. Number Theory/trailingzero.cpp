#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const ll MOD = 1e9 + 7;

ll legendre(ll n, int p){
    ll res = 0;
    for (ll i = p; i <= n; i *= p){
        res = ((res % MOD) + ((n / i) % MOD)) % MOD;
    }
    return res;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    ll n;
    cin >> n;
    cout << legendre(n, 5);
    return 0;
}