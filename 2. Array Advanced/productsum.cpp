#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const ll mod = 1e9 + 7;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int n;
    cin >> n;
    int a[n];
    for (int &x : a) cin >> x;
    sort(a, a + n);
    ll res = 0;
    for (int i = 0; i < n; i++){
        res = ((res % mod) + ((1ll * a[i] * i) % mod)) % mod;
    }
    cout << res;
    return 0;
}