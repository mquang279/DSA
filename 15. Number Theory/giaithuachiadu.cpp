#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const ll MOD = 1e9 + 7;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int n;
    cin >> n;
    ll res = 1;
    for (int i = 1; i <= n; i++){
        res = res * i;
        res %= MOD;
        cout << res << endl;
    }
    return 0;
}