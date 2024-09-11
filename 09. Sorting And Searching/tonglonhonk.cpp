#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int n, k;
    cin >> n >> k;
    int a[n];
    ll cnt = 0;
    for (int &x : a) cin >> x;
    sort(a, a + n);
    for (int i = 0; i < n; i++){
        auto it = upper_bound(a + i + 1, a + n, k - a[i]);
        cnt += n - (it - a);
    }
    cout << cnt;
    return 0;
}