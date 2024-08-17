#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int n, x;
    cin >> n >> x;
    int a[n];
    for (int &x : a) cin >> x;
    auto it = lower_bound(a, a + n, x);
    if (it != a + n && *it == x) cout << it - a;
    else cout << -1;
    return 0;
}