#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
const ll MOD = 1e9 + 7;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int n, tmp;
    cin >> n;
    ll res = 0;
    for (int i = 0; i < n; i++){
        cin >> tmp;
        res = res * 10 + tmp;
        res %= MOD;
    }
    cout << res;
    return 0;
}