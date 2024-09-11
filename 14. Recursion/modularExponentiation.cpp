#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

ll mod = 1e9 + 7;

ll powMod(ll a, ll b){
    if (b == 0) return 1;
    ll half = powMod(a, b / 2);
    half = ((half % mod) * (half % mod)) % mod;
    if (b % 2 == 1) half = (half * a) % mod;
    return half;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    ll a, b;
    cin >> a >> b;
    cout << powMod(a, b);
    return 0;
}