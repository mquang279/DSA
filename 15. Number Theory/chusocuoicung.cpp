#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const ll MOD = 10;

int binPow(ll n){
    if (n == 0) return 1;
    int x = binPow(n / 2);
    if (n % 2 == 0) return (x % MOD) * (x % MOD) % MOD;
    else return (x % MOD) * (x % MOD) % MOD * 8 % MOD;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    ll n;
    cin >> n;
    cout << binPow(n);
    return 0;
}