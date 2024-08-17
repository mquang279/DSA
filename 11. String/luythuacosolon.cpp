#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

ll mod = 1e9 + 7;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    string n;
    ll m;
    cin >> n >> m;
    ll a = 0;
    for (char x : n){
        a = (a * 10 + (x - '0')) % mod;
    }
    ll power = a % mod;
    int res = 1;
    while (m != 0){
        if (m % 2 == 1) res = ((res % mod) * (power % mod)) % mod;
        power = ((power % mod) * (power % mod)) % mod;
        m /= 2;
    }
    cout << res;
    return 0;
}