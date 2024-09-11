#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const ll MOD = 1e9 + 7;

ll binPow(ll a, ll b){
    if (b == 0) return 1;
    ll x = binPow(a, b / 2);
    if (b % 2 == 0) return (x % MOD) * (x % MOD) % MOD;
    else return (x % MOD) * (x % MOD) % MOD * (a % MOD) % MOD;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    ll a, b;
    cin >> a >> b;
    cout << binPow(a, b);
    return 0;
}