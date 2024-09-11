#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

bool check(ll mid, ll a, ll b, ll n){
    return (mid / a) * (mid / b) >= n;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    ll n, a, b;
    cin >> a >> b >> n;
    ll left = 0, right = max(a, b) * n, res = b * n;
    while (left <= right){
        ll mid = (right + left) / 2;
        if (check(mid, a, b, n)){
            res = mid;
            right = mid - 1;
        }
        else left = mid + 1;
    }
    cout << res;
    return 0;
}