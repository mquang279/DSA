#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
const ll MOD = 100;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int n;
    cin >> n;
    int tmp = 28;
    ll res = 1;
    for (int i = 1; i <= n; i++){
        res = ((res % MOD) * (tmp)) % MOD;
    }
    cout << res;
    return 0;
}