#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int n, q;
    cin >> n >> q;
    int a[n];
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    int diff[n + 1] = {0};
    for (int i = 0; i < q; i++){
        int l, r;
        cin >> l >> r;
        diff[l - 1]++;
        diff[r]--;
    }
    for (int i = 1; i < n; i++){
        diff[i] += diff[i - 1];
    }
    sort(a, a + n, __greater());
    sort(diff, diff + n, __greater());
    ll res = 0;
    for (int i = 0; i < n; i++){
        res += 1ll * a[i] * diff[i];
    }
    cout << res;
    return 0;
}