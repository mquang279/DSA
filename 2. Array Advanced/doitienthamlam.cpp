#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    ll n;
    vector<int> v({1, 2, 5, 10, 20, 50, 100, 200, 500, 1000});
    cin >> n;
    ll res = 0;
    for (int i = v.size() - 1; i >= 0; i--){
        if (v[i] <= n){
            res += n / v[i];
            n %= v[i];
        }
        if (n == 0) break;
    }
    cout << res;
    return 0;
}