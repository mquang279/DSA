#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const ll MOD = 1e9 + 7;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int n;
    cin >> n;
    ll a[n + 1];
    a[1] = a[2] = 1;
    for (int i = 3; i <= n; i++){
        a[i] = ((2 * a[i - 1]) % MOD + (3 * a[i - 2] % MOD)) % MOD;
    }
    cout << a[n];
    return 0;
}