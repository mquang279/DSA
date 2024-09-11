#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int n, q;
    cin >> n >> q;
    ll a[n], diff[n] = {0};
    for (int i = 0; i < n; i++){
        cin >> a[i];
        if (i == 0) diff[i] = a[i];
        else diff[i] = a[i] - a[i - 1];
    }
    while (q--){
        int l, r, k;
        cin >> l >> r >> k;
        diff[l] += k;
        diff[r + 1] -= k;
    }
    for (int i = 1; i < n; i++){
        diff[i] += diff[i - 1];
    }
    for (int i = 0; i < n; i++){
        cout << diff[i] << " ";
    }
    return 0;
}