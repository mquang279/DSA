#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const ll MOD = 1e9 + 7;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int a, b;
    cin >> a >> b;
    ll res = 1;
    for (int i = 0; i < b; i++){
        res = (res % MOD * a % MOD) % MOD;
    }
    cout << res;
    return 0;
}