#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

bool check(ll mid, ll a[], ll n, ll l){
    ll tmp = 0;
    for (int i = 0; i < n; i++){
        if (a[i] > mid) tmp += a[i] - mid;
    }
    return tmp >= l;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    ll n, l;
    cin >> n >> l;
    ll a[n];
    for (ll &x : a) cin >> x;
    ll left = 0, right = *max_element(a, a + n), res = 0;
    while (left <= right){
        ll mid = (right + left) / 2;
        if (check(mid, a, n, l)){
            res = mid;
            left = mid + 1;
        }
        else right = mid - 1;
    }
    cout << res;
    return 0;
}