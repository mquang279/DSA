#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    ll x, y;
    cin >> x >> y;
    ll res = 5 * x + 2 * y + x * y;
    cout << res;
    return 0;
}