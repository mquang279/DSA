#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

bool check(ll mid, int n, int x, int y){
    return (mid / x + mid / y) >= n;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int n, x, y;
    cin >> n >> x >> y;
    n--;
    ll left = 0, right = max(x, y) * n, res;
    while (left <= right){
        ll mid = (right + left) / 2;
        if (check(mid, n, x, y)){
            res = mid;
            right = mid - 1;
        }
        else left = mid + 1;
    }
    cout << res + min(x, y);
    return 0;
}