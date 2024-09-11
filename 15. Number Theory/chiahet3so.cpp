#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

ll lcm(ll a, ll b) {
    return (a / __gcd(a, b)) * b;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int a[3], n;
    cin >> a[0] >> a[1] >> a[2] >> n;
    ll bcnn = a[0];
    for (int i = 1; i < 3; i++) {
        bcnn = lcm(bcnn, a[i]);
    }
    ll limit = 1;
    for (int i = 0; i < n; i++){
        limit *= 10;
    }
    if (bcnn >= limit) cout << -1;
    else{
        ll min_val = limit / 10;
        ll res = ((min_val + bcnn - 1) / bcnn) * bcnn;
        cout << res;
    }
    return 0;
}
