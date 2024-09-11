#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int n, k;
    cin >> n >> k;
    ll a[n];
    for (ll &x : a) cin >> x;
    sort(a + 1, a + n, greater<ll>());
    ll res = 0;
    for (int i = 0; i <= k; i++){
        res += a[i];
    }
    for (int i = k + 1; i < n; i++){
        res -= a[i];
    }
    cout << res;
    return 0;
}