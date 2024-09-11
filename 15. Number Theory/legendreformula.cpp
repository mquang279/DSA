#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

ll legendre(ll n, int p){
    ll res = 0;
    for (ll i = p; i <= n; i *= p){
        res += n / i;
    }
    return res;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    ll n;
    int p;
    cin >> n >> p;
    cout << legendre(n, p);
    return 0;
}